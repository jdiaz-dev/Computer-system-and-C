/* 
  - the constructor run when we run an instance, the destructor run when destroy an object
  - every time that an object is destroyed, the destruction method will get called

  - with the constructor we initialize variables
  - with destructor we uninitialize varibles to clean memory for instance

  - destructor applies to both stack and heap allocated objects, so if you allocate an object using new or if we use stack-based object
     -> when we use new keyword to create objects, it is stored int the heap
 
 */

#include <iostream>

class Entity {
  private:
    int X;
    int Y;

  public:
    Entity(){
      X = 0.0f;
      Y = 0.0f;

      std::cout << "Created Entity" << std::endl; 
    }
    Entity(int x, int y){
      X = x;
      Y = y;
    }

    // ~ : to destroy object
    ~Entity(){
      std::cout << "Destroyed Entity" << std::endl; 

    }
    void Print(){

      //printing text with space in text
      std::cout << X << "; " << Y << std::endl;
    }
};

void Function(){
  Entity e; //object create on the stack
  e.Print();

  //when we use stack based creation, it is destroyed automatically
  e.~Entity(); //using destructor
}

int main(){
  Function();  
  std::cin.get();
  
  return 0;
}
