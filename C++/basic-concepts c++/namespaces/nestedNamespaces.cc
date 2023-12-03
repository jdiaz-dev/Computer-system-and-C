#include <iostream>
using namespace std;
 
// first name space
namespace first_space{
   void func(){
      cout << "Inside first_space" << endl;
   }
   // second name space
   namespace second_space{
      void func(){
         cout << "_Inside second_space_" << endl;
      }
   }
}
using namespace first_space::second_space;
int main ()
{
  
   // This calls function from second name space.
   func();
    
   return 0;
}