#include <iostream>

// void helperPro();

void nostaticMethod(){
  std::cout << "nostaticMethod" << std::endl; 
};

static void helperPro(){
  // std::cout << "helperPro" << std::endl; 
  nostaticMethod();
};


int main(){
  helperPro();
}