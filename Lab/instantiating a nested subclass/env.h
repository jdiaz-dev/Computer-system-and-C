#include <string.h>
#include <iostream>

class AsyncHooks
{
  public:
    class DefaultTriggerAsyncIdScope
    {
    public:
      explicit DefaultTriggerAsyncIdScope(int number);
      // {
      //   std::cout << "invoked with class" << std::endl;
      // };
      // explicit DefaultTriggerAsyncIdScope(Environment *env,
      //                                     double init_trigger_async_id);
      // ~DefaultTriggerAsyncIdScope();
      /* explicit DefaultTriggerAsyncIdScope(int value);

      DefaultTriggerAsyncIdScope(const DefaultTriggerAsyncIdScope &) = delete;
      DefaultTriggerAsyncIdScope &operator=(const DefaultTriggerAsyncIdScope &) =
          delete;
      DefaultTriggerAsyncIdScope(DefaultTriggerAsyncIdScope &&) = delete;
      DefaultTriggerAsyncIdScope &operator=(DefaultTriggerAsyncIdScope &&) =
          delete; */

      int numberOfClass = 777;

    private:
      AsyncHooks *async_hooks_;
      double old_default_trigger_async_id_;
    };
};
AsyncHooks::DefaultTriggerAsyncIdScope::DefaultTriggerAsyncIdScope(int number){

  std::cout << "showing number" << std::endl;
};