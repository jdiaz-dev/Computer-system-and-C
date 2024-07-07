#include <iostream>
using namespace std;

struct node_module
{
    int nm_version;
    unsigned int nm_flags;
};

/* 
    - When a global variable is declared as static, its visibility is limited to the file in which it is declared.
 */
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
/* 
    - Executable statements  such "cout" only can run inside a function or a class method, such as main() or a constructor
    - because the global scope is meant for declarations and definitions, not for immediate execution.
 */



#define NODE_BINDING_CONTEXT_AWARE_INTERNAL(modNumber, amountFlags) \
    NODE_BINDING_CONTEXT_AWARE_CPP_2(modNumber, amountFlags)

NODE_BINDING_CONTEXT_AWARE_INTERNAL(20, 30)

int main()
{
    return 0;
}