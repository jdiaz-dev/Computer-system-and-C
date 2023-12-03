#include <iostream>

// when_to_use_inline_functions.cpp
//Inline functions are best used for small functions such as accessing private data members.
class Point
{
public:
    // Define "accessor" functions as
    //  reference types.
    unsigned& x();
    unsigned& y();
    Point(int a, int b){
      _x = a;
      _y = b;
    }
private:
    unsigned _x;
    unsigned _y;
};

inline unsigned& Point::x()
{
    return _x;
}

//saving overhead in inline function
inline unsigned& Point::y()
{
    return _y;
}
int main()
{
  Point point(5,6);
  std::cout << point.x() << std::endl;
}