#include <iostream>
#include "helper.h"

//it is possible to include c++ file in other c++ file
#include "help.cc"

using namespace std;

#define V(modname)                               \
  cout << "modname param = " << modname << endl; \
  void _register_modname()

struct node_module
{
  int nm_version;
  unsigned int nm_flags;
  // void* nm_dso_handle; //check this void
  // const char* nm_filename;
};

// function as param
void helperFn(int (*func)(int, int))
{
  int value1 = 555;
  int value2 = 555;
  int res = func(value1, value2);
  cout << "func = " << func << endl;
  cout << "res = " << res << endl;
  cout << "calling helper" << endl;
}

int functionAsParam(int x, int y)
{
  return x + y;
}
void otherFunction(int number)
{
  cout << "otherFunction" << endl;
}
void otherFunctionMore()
{
  cout << "otherFunctionMore" << endl;
}

// we cannot insert comments and commentes inside macro code
#define NODE_BINDING_CONTEXT_AWARE_CPP(modNumber, amountFlags) \
  cout << "modNumber = " << modNumber << endl;                 \
  cout << "amountFlags = " << amountFlags << endl;             \
  static node_module _module = {                               \
      modNumber,                                               \
      amountFlags};                                            \
  helperFn(functionAsParam);                                   \
  otherFunction();                                             \
  otherFunctionMore();                                         \
  void _function_##modNumber() { otherFunctionMore(); }

#define NODE_BINDING_CONTEXT_AWARE_CPP_2(modNumber, amountFlags) \
  node_module _module = {                                        \
      modNumber,                                                 \
      amountFlags};                                              \
  // otherFunctionMore()                                         
  // void functionInsideMacro() { otherFunctionMore(); };

namespace node
{

#define NODE_BINDING_CONTEXT_AWARE_INTERNAL(modNumber, amountFlags) \
  NODE_BINDING_CONTEXT_AWARE_CPP_2(modNumber, amountFlags);
}
#define NODE_BINDING_EXTERNAL_REFERENCE(func, number)                         \
    func(number, 50)

NODE_BINDING_CONTEXT_AWARE_INTERNAL(33, 44)
// NODE_BINDING_EXTERNAL_REFERENCE(helperFn, 20);

#define SQUARE(x) ((x) * (x))
int main()
{
  help();
  int square_of_five = SQUARE(5);
  cout << "square_of_five = " << square_of_five << endl;

  return 0;
}

// HELPER_MACRO();
// void _register_##modname() { otherFunction(); };
// _function_##modNumber()
