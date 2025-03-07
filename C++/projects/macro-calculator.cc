#include <iostream>

using namespace std;

class Home {
  private:
    string name;
  public:
    Home(string name){
      this->name = name;
    }
};
class Computer {
  private:
    string name;
  public:
    Computer(string name){
      this->name = name;
    }
};
class Helper {
  private:
    int num1;
    int num2;
    Computer computer;
    Home* home;
  public:
    Helper(int num1, int num2, string comptuer, Home* home) : 
      num1(num1), 
      num2(num2), 
      computer(comptuer),
      home(home){}
};

void testPointer(Helper* ptr){
  int number = 5;
  cout << number << endl;
}

int main(){
  float activityFactor = 1.55;
  Home home1("homesito");
  Home* home2 = &home1;
  Helper num1(100, 200, "feo", home2);
  Helper* num2 = &num1;
  testPointer(num2);

  return 0;
}
