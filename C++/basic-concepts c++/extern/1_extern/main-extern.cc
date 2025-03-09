#include "global.h"
#include "extern-for-C-compiler.h"
// since global_x still needs to be defined somewhere,
// we define it (for example) in this source file
int global_x;

int main()
{
    // set global_x here:
    global_x = 5;
    multiplyBy2(5);
    foo();
    print_global_x();
}