#include <stdio.h>
#include <stdarg.h>
#include <iostream>

#ifndef NDEBUG
#  define debug_print(msg) stderr_printf msg
#else
#  define debug_print(msg) (void)0
#endif

void
stderr_printf(const char *fmt, ...)
{
  std::cout << "calling macro pro ==> " <<fmt << std::endl;
  va_list ap;
  va_start(ap, fmt);
  vfprintf(stderr, fmt, ap);
  va_end(ap);
}

int
main(int argc, char *argv[])
{
  debug_print(("--argv[0] is = %s, argc is = %d\n", argv[0], argc));
  return 0;
}