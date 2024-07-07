#include "env.h"
#include <iostream>

int main()
{

  AsyncHooks::DefaultTriggerAsyncIdScope trigger_scope(4);

  
  // trigger_scope();
  std::cout << "hello korahh" << trigger_scope.numberOfClass << std::endl;
}