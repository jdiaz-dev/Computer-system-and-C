#include<iostream> 
#include <string>

class Player
{
  public:
    int x, y; //by default every attribute is private
    int speed;

    void move(int xa, int ya){
      x += xa * speed;  
      y += ya * speed; 

      std::cout << "Car has moved" << std::endl;
    }

};

int main()
{
  Player player; //it is an instance of a object
  player.x = 5000;
  player.speed = 1;

  /* player.move(1, -1); */
  std::cout << "Object to String = " << std::string(player) << std::endl;

}