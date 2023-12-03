// C++ program to illustrate default
// constructor without 'explicit'
// keyword
#include <iostream>
#include <string> 
using namespace std;

class Complex {
public:
	double real;
	double imag;
  string myString;

public:

	// Parametrizing constructor
	Complex(double r = 0.0,
			double i = 0.0, string stringTest = "ñaña") : real(r),
							imag(i), myString(stringTest)
	{
	}

	// A method to compare two
	// Complex numbers
	bool operator == (Complex rhs)
	{
		return (real == rhs.real &&
				imag == rhs.imag);
	}
};

// Driver Code
int main()
{
	// a Complex object
	Complex com1(4.0, 0.0, "hellow ugly");

	if (com1 == 3.0)
		cout << "Same: " << com1.real << " " << com1.myString << endl;
	else
		cout << "Not Same: " << com1.real << " " << com1.myString << endl;
	return 0;
}
