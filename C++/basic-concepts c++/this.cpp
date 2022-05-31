/* 
  - this: it is the only accesible to the member function
  - this is the pointer to the current object instance that the method belons to
  - the method must be called with a valid object


  member function : function that belongs to a class
 */
#include <iostream>

class Entity;
void PrintEntity(Entity *e);

class Entity {
  public:
    int x, y;

    Entity(int x, int y)
      :x(x), y(y) //another way to initialize variables
    {

      //another way to use this pointer
      (*this).x = x;
      this->y = y;

      //to pass current instance to PrintEntity function
      PrintEntity(this);
    }

    //getter
    int GetX() const //when we use const keyword, we are not allowed to modify the class
    {
      //in const function this is not actually equal to just an entity (special cases)
      /* const Entity* e = this;
      e->x = 20; //impossible to modify
      
      x = 60; //impossible to modify */

      return x;
    }
};



void PrintEntity(Entity *e){
  std::cout << e->x << std::endl;
}

int main(){
  Entity *e = new Entity(5, 6);
  e->GetX();
  PrintEntity(e);
  return 0;
}
