/* 
  ::  -> It is used for following purposes.

    https://www.geeksforgeeks.org/scope-resolution-operator-in-c/
 */

#include<iostream> 
using namespace std;

// 2) -------------- To define a function outside a class. 
class A 
{
public: 
  
   // Only declaration
   void fun();
};
  
// Definition outside class using ::
void A::fun()
{
   cout << "\nfun() called";
}


class Test
{
    static int x;  
public:
    static int y;   
  
    // Local parameter 'a' hides class member
    // 'a', but we can access it using ::
    void func(int x)  
    { 
       // We can access class's static variable
       // even if there is a local variable
       cout << "Value of static x is " << Test::x;
  
       cout << "\nValue of local x is " << x;  
    }
};

//3) -------------- To access a class’s static variables.
class Test
{
    static int x;  
public:
    static int y;   
  
    // Local parameter 'a' hides class member
    // 'a', but we can access it using ::
    void func(int x)  
    { 
       // We can access class's static variable
       // even if there is a local variable
       cout << "Value of static x is " << Test::x;
  
       cout << "\nValue of local x is " << x;  
    }
};


int x;  // Global x
   
int main()
{
  int x = 10; // Local x

  //1) -------------- To access a global variable when there is a local variable with same name:
  cout << "Value of global x is " << ::x;
  cout << "\nValue of local x is " << x;  

  A a;
  a.fun();

  return 0;
}