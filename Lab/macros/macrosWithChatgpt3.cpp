#include <iostream>

using namespace std;

struct node_module
{
    int nm_version;
    unsigned int nm_flags;
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
    cout << "otherFunction" << " " << number << endl;
}

void otherFunctionMore(int value)
{
    cout << "otherFunctionMore" << value << endl;
}

#define NODE_BINDING_CONTEXT_AWARE_CPP(modNumber, amountFlags) \
    cout << "modNumber = " << modNumber << endl;               \
    cout << "amountFlags = " << amountFlags << endl;           \
    static node_module _module = {                             \
        modNumber,                                             \
        amountFlags};                                          \
    helperFn(functionAsParam);                                 \
    otherFunction(modNumber);                                  \
    declare_function(modNumber)

//it is possible to declare function inside a macro
#define declare_function(modNumber) \
    void _function_##modNumber();

//it is possible to define function inside a macro
#define define_function(modNumber) \
    void _function_##modNumber() { otherFunctionMore(modNumber); }

//we can invoke the function with other macro
#define call_function(modNumber) \
    _function_##modNumber();

define_function(10000)

int main()
{

    call_function(10000);//10000: we need to use 10000 because with this number was created the function
    NODE_BINDING_CONTEXT_AWARE_CPP(10099999, 30);
    return 0;
}

// Define the function
