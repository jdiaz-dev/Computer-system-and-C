/* 
    * external linkage
        - basically means that it needs to be declared outside of a function
        - extern int global_x; tells the compiler that an object of type int called global_x exists somewhere.
        - It's not the compilers job to know where it exists, it just needs to know the type and name so it knows how to use it
        - Once all of the source files have been compiled, the linker will resolve all of the references of global_x
*/

extern int global_x;
void print_global_x();


