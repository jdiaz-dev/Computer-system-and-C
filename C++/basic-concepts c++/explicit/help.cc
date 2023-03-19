#include <iostream>

class TheString {
public:

    //explicit void make implicit conversion
    TheString (int n);
};
int main()
{
    TheString mystring = 'x';

    // std::cout << mystring << std::endl;
    return 0;
}