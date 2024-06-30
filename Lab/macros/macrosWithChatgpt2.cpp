#include <iostream>

using namespace std;

// Function that matches the signature expected by helperFn
int add(int a, int b)
{
    return a + b;
}
//expects a function pointer as argment
void helperFn(int (*func)(int, int))
{
    int value1 = 555;
    int value2 = 555;
    int res = func(value1, value2);
    cout << "func = " << func << endl;
    cout << "res = " << res << endl;
    cout << "calling helper" << endl;
}

#define NODE_BINDING_EXTERNAL_REFERENCE(func, number) \
    func(add)

int main()
{
    NODE_BINDING_EXTERNAL_REFERENCE(helperFn, 20);
    return 0;
}

