#include <iostream>
#include <string>

using namespace std;
// int s_Variable = 9;
extern int s_Variable; // linking variable from external file

extern string ReturnText();


int main()
{
  std::cout << s_Variable <<std::endl;
  std::cin.get(); //to moving variable to the console

  std::cout << "Hi: " << ReturnText() << std::endl;
}



