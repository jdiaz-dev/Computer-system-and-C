#include <iostream>
#include <string>

using namespace std;
/* 
  - static out of class means that linkage of that symbol going to be internal, it is visible to that translation unit that we defined in it
  - static keywork inside class or structs means that variable going to share memory with all instances of a class

  - a similar things happpends in static methods in a class there is no instance of that class being passed into that method
 */

//static outside

//this means that this variable is only be linked internally inside translation unit
static int s_NumberVariable = 5;//we use s_ by convetion

//due that is not static, we can import it in other file
//recommendable doesn't use global variable
int s_Variable = 15;//we use s_ by convetion

static string ReturnText()
{
  cout << "Hi from static" << endl;

  return "Hi from static";
}