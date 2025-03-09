/* 
* C-style linkage

C-style linkage in C++ refers to the rules that control how names are managed by the compiler when objects or functions are defined in multiple translation units (source files). It is a way of ensuring that names (such as functions and variables) can be used across different files while avoiding name conflicts.

In C++, the C-style linkage mechanism ensures that functions and variables follow the same name-mangling scheme as in C, which is simpler than C++'s more complex name-mangling used for overloading and other features. This makes it possible to use C libraries in C++ code without issues related to name mangling.

    Key Points about C-Style Linkage:
    1. Extern Keyword:
        - The extern keyword is used to declare variables or functions that are defined elsewhere. This tells the compiler to link them from another translation unit.


    2. No Name Mangling:
        - In C, function overloading and other C++ features are not supported, so the compiler does not need to mangle function names. Thus, the function name is used as is.
        - In C++, you can prevent name mangling for functions and variables by using extern "C".

    3. extern "C":

        - To ensure C-style linkage in C++ code, the extern "C" declaration is used. This tells the compiler to treat the function or variable as if it were written in C, avoiding C++-specific name mangling.

    4. Linking C Libraries:

        - When linking C libraries in C++ code, you often use extern "C" to prevent C++ name mangling and ensure the symbols are correctly linked.
    
    5. Avoiding C++ Features:
        - When using C-style linkage, you must avoid C++ features such as function overloading, templates, and namespaces, as these are not compatible with C linkage.
 */