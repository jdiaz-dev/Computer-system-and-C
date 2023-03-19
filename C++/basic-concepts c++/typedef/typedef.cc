#include <iostream>

typedef int myinteger;
typedef char *mystring;
typedef int (*myTypeDefAddition)(
    int num1,
    int num2);

//it is a function pointer created to store the memory address of a function
typedef int (*myTypeDefSubstraction)(
    int num1,
    int num2,
    int num3);

int myAdditionFunction(int num1, int num2)
{
    return num1 + num2;
}

int mySubstractionFunction(int num1, int num2, int num3)
{
    return num1 - num2 - num3;
}
void _register_isolate_##modname(int num){
    
}

int main()
{
    myinteger value = 40;
    mystring theChar = "a string";
    myTypeDefAddition addFn = myAdditionFunction;
    myTypeDefSubstraction substractionFn = &mySubstractionFunction;
    int addition = (addFn)(4, 15);
    int substraction = (*substractionFn)(80, 20, 5);

    std::cout << value << std::endl;
    std::cout << theChar << std::endl;
    std::cout << addition << std::endl;
    std::cout << substraction << std::endl;

    return 0;
}