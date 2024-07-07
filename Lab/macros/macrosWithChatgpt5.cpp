#include <iostream>
using namespace std;

struct node_module
{
    int nm_version;
    unsigned int nm_flags;
};

#define NODE_BINDING_CONTEXT_AWARE_CPP_2(modNumber, amountFlags) \
    struct _module_initializer {                                 \
        _module_initializer() {                                  \
            node_module _module = {                              \
                modNumber,                                       \
                amountFlags};                                    \
            cout << "hello" << endl;                             \
        }                                                        \
    };                                                           \
    static _module_initializer _module_init;

#define NODE_BINDING_CONTEXT_AWARE_INTERNAL(modNumber, amountFlags) \
    NODE_BINDING_CONTEXT_AWARE_CPP_2(modNumber, amountFlags)

NODE_BINDING_CONTEXT_AWARE_INTERNAL(20, 30)

int main()
{
    return 0;
}