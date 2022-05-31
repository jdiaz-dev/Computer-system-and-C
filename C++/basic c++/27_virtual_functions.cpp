/* 
  - virtual functions allow up to overrride methods in sublcasses
  - virutal functions reduce dynamic dispatch which compile is typically implemented by our V table
    - V table is a table that contain a mapping for all virtual functions for our base clase, so we can actually map them to the correct ovewritten function at runtime
  - if we want override function, we need to mark the base function as virtual
 
  - there are 2 runtime costs associated with virtual functions
      -> first: we have the additional memory that is required in order to store, so we can dispatch to the correct function that includes a member pointer in the actual base path that points to the V table
      -> second : every time that we call to the virtual function we have to go through that table to determinate which function to actually map, which is an additional performance penalty

  - only void virtual functions if our program have terrible performance issues

*/
#include <iostream>
#include <string>

class Entity {
  public:
    //get name method that return an string
    //we want override function, we need to mark the base function as virtual
    //the compiler say, hey generate a V table for this function
    virtual std::string GetName(){
      return "Entity";
    }
};

//Player class inheriting from Entity class
class Player : public Entity {
  private:
    std::string m_Name;

  public:
    Player(const std::string &name)
      : m_Name(name){} // : This is called an initialization list. It is for passing arguments to the constructor of a parent class.

    //override : new feature that arrived with c++ version 11, this keyword isn't required
    std::string GetName() override {
      return m_Name;
    }
};

void PrintName(Entity *entity){
  std::cout << entity->GetName() << std::endl;
}

int main(){
  Entity *e = new Entity();
  PrintName(e);

  Player *p = new Player("Jonathan");
  PrintName(p),
  
  // Entity *entity = p; //pointer to p 
  // // std::cout << entity->GetName() << std::endl;

  std::cin.get();

  return 0;
}

