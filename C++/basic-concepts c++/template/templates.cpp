/* 
  1. there are 2 places where we can apply templates.
    a. function templates
    b. class templates 

  2. templates are the way to write generic programs
  3. the "main point" is we pass data type as parameter to function or class
 */

#include <iostream>

using namespace std;

//defining templates, it is similar to typescript
template <typename MyType>

//instead to define these types as paramas we will define templates
//internally the compiler crate 2 functions and will be replaced with its respective datatypes

MyType getMax(MyType x, MyType y){
  return x > y ? x : y;
}

int main(){
  int x = 18, y = 20;
  cout << getMax<int>(x, y) << endl;


  char c1 = 'a', c2 = 'x';
  cout << getMax<char>(c1, c2) << endl;
  return 0;
}

//min 7:10  https://www.youtube.com/watch?v=vUI5GvWexsM