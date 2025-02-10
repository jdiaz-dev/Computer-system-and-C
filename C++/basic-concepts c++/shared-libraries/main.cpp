#include "myclass.h"

//if linked previously at commilation time, we will be capable to use MyClass class 
// using shared library
int main() {
    MyClass obj;
    obj.sayHello();
    return 0;
}
