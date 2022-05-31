#include <iostream>
using namespace std;

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

//to pass classes as parameter
/* void move(Player& player, int xa, int ya){
  player.x += xa * player.speed;  
  player.y += ya * player.speed; 
}
 */
int main()
{
  Player player; //it is an instance of a object
  player.x = 5;
  player.speed = 1;

  player.move(1, -1);
  cout << "The value of x = " << player.x;
  cout<<endl;
  // std::cin.get();

}

//video 18 finished 
