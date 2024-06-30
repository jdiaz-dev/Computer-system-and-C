#include <iostream>

// ------------------------ importnat definitions with chatgpt

/* 
    - Macro Definition: -  You define macros using #define.
    - Macro Expansion: - The preprocessor replaces each occurrence of the macro with its definition.
                      - Since macros are expanded at compile time,
    - Preprocessing: - This occurs before actual compilation, transforming the source code by expanding macros.
                     -it is possible to make Conditional Compilation
                            #ifdef DEBUG
                                cout << "Debug mode" << endl;
                            #endif

 */
struct node_module
{
    int nm_version;
    unsigned int nm_flags;
};

/* 
     the variable _module is the same as the scope of the macro expansion, it means what is global
 */
#define NODE_BINDING_CONTEXT_AWARE_CPP_2(modNumber, amountFlags) \
    node_module _module = {                                      \
        modNumber,                                               \
        amountFlags};                                            \

#define NODE_BINDING_CONTEXT_AWARE_INTERNAL(modNumber, amountFlags) \
    NODE_BINDING_CONTEXT_AWARE_CPP_2(modNumber, amountFlags);

NODE_BINDING_CONTEXT_AWARE_INTERNAL(20, 30)

void print_module(const node_module &module)
{
    std::cout << "nm_version: " << module.nm_version << std::endl;
    std::cout << "nm_flags: " << module.nm_flags << std::endl;
}

int main()
{
    print_module(_module);
    return 0;
}
