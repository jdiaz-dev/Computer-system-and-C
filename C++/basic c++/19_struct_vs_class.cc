#include <iostream>
using namespace std;

/* 
  * the diference between class and struct 
  - attributes in class by default is private
  - attributes in struct by default is public
  - but really there isn't difference between struct and class, it depends of programming style
 
  - the only reason because struct exists in c++ is to mantain the compatibility with C language
  - if we wipe (borrar) struct keyword, we lose compatibility with C language
 
  *STYLE OF PROGRAMMIN
  - the youtuber use struct when there is a plain data, when the structure represents variables
  - never to use inheritance with structs
 */

#define struct class  //to replace struct by a class

//this struct is now a class
struct Player
{
  // private:
  public:
    int x, y; //in the struct by default every attribute is public
    int speed;

    void move(int xa, int ya){
      x += xa * speed;  
      y += ya * speed; 

      std::cout << "Car has moved" << std::endl;
    }

};

//examaple plain data
struct Vector2
{
  float x, y; //this is plain data due that these will not have a lot functionality, it is only a representation of floats

  //but equally we can add methods
  void Add(const Vector2& other)
  {
    //but at the end we just are manipulating two float variables
    x += other.x;
    y += other.y;
  } 
};

int main()
{
  Player player; //it is an instance of a object
  player.x = 4;
  player.speed = 1;

  player.move(1, -1);
  cout << "The value of x = " << player.x;
  cout<<endl;
  // std::cin.get();

}
//video 19 fisnished