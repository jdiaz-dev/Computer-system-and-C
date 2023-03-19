/* 
    https://www.geeksforgeeks.org/__attribute__constructor-__attribute__destructor-syntaxes-c/


        1. __attribute__((constructor)) runs when a shared library is loaded, typically during program startup.
        
        2. __attribute__((destructor)) runs when the shared library is unloaded, typically at program exit.
        
        3. The two parentheses are presumably to distinguish them from function calls.
        4. __attribute__ is a GCC specific syntax;not a function or a macro.
 */

void __attribute__((constructor)) calledFirst();
void __attribute__((destructor)) calledLast();
  
void main()
{
    printf("\nI am in main");
}
  
// This function is assigned to execute before
// main using __attribute__((constructor))
void calledFirst()
{
    printf("\nI am called first");
}
  
// This function is assigned to execute after
// main using __attribute__((destructor))
void calledLast()
{
    printf("\nI am called last");
}