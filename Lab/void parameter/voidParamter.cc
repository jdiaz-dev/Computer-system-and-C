#include <iostream>

int helper(void* value){
  std::cout << "helper = " << value << std::endl;
  return 0;
}

int main(){
  int num = 234;

  std::cout << "num in main = " << (void*) num << std::endl; //(void*) num : it doesn't print addres memory
  std::cout << "num in main 2 = " << &num << std::endl; //most confiable way to print address memory 

  helper(&num);
  printf("num = %p", &num);
  return 999;
}
