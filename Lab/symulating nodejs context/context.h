#include <iostream>

namespace node
{

  typedef double async_id;
  struct async_context
  {
    ::node::async_id async_id;
    ::node::async_id trigger_async_id;
  };

}

namespace v8
{

  template <class T>
  class Local
  {
  public:
    Local() : val_(0) {}
    T *val_;
  };

#if !defined(V8_IMMINENT_DEPRECATION_WARNINGS)
  // Handle is an alias for Local for historical reasons.
  template <class T>
  using Handle = Local<T>;
#endif
}

int testFunction()
{
  std::cout << "test fucnion " << std::endl;
  return 0;
}