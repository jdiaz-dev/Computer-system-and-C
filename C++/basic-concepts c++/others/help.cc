#include <iostream>
#include <utility>
#include <string>
#include <sstream>
#define my_fn_which_takes_a_string(value) to_string value;


template <typename T>
std::string to_string( T value )
{
  std::ostringstream ss;
  ss << value;
  return ss.str();
}



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

  std::string res = to_string((player));
  /* player.move(1, -1); */
  std::cout << res  << std::endl;

}