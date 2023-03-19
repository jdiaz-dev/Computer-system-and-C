
#include <iostream>

#define intermediaryFn(valuee) multiply1 valuee
#define callFnInNestedWay(value) intermediaryFn value
#define callFn(value1, value2, value3) \
  {                                    \
    multiply2(value1, value2, value3)  \
  }
#define consoleLog(value) std::cout << "the value" << value << std::endl;

int multiply1(int value)
{
  return value * 60;
}
int multiply2(int value1, int value2, int value3)
{
  return value1 * value2 * value3;
}
int main(int argc, char *argv[])
{
  int res = callFnInNestedWay(((50)));
  std::cout << res << std::endl;

  int res2 = callFn(4, 5, 12);
  std::cout << res2 << std::endl;

  consoleLog(9999) return 0;
}
