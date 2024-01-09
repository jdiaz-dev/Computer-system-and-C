#include <iostream>
/* 
#define NODE_MODULE_VERSION 120
#define NODE_MODULE_INITIALIZER_BASE "node_register_module_v"

#define NODE_MODULE_INITIALIZER_X_HELPER(base, version) base##version

#define NODE_MODULE_INITIALIZER_X(base, version) \
  NODE_MODULE_INITIALIZER_X_HELPER(base, version)


#define NODE_MODULE_INITIALIZER                           \
  NODE_MODULE_INITIALIZER_X(NODE_MODULE_INITIALIZER_BASE, \
                            NODE_MODULE_VERSION) */

int asdf = 666666666;
#define help3 asdf
#define help2(a, b) a##b
#define help1(x, y) (help2(x, y))
#define help0(v,b) help2(v, b)


int main()
{

  // NODE_MODULE_INITIALIZER;
  std::cout << "value: "
            << help0("asfasdfsdf", "b")  << std::endl;
  return 0;
}