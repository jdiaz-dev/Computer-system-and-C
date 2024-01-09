#include <iostream>

//const_inside_class
class ConstInsideClass {

  public:
    int value;
  
    ConstInsideClass(int intitialValue){
      value = intitialValue;
    }
    //Constant member functions are those functions that are denied permission to change the values of the data members of their class. 
    inline int addition(int x, int b);
    inline int object(int x, int b, int c) const;
};

inline int ConstInsideClass::addition(int x, int b) {
  value = x + b;
  
  return value;
}

int ConstInsideClass::object(int x, int b, int c) const {
  // value = x -b - c; //we  cannot modify data member inside this method due to const keyword
  return x -b - c;
}

int main(){
  ConstInsideClass cic(200);
  int res = cic.addition(6, 3);
  std::cout << "res = " << res << std::endl; 
  
  int res2 = cic.object(100, 20, 30);
  std::cout << "res2 = " << res2 << std::endl; 
  
  return 0;
}