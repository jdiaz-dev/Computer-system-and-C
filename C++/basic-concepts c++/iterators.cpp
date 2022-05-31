#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main(){
  vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

  //other way to iterate is using range based for loop
  for(string planet: planets){
    cout << planet << endl;
  }

  //iterator is another mechanism for iterating stuff, it is an alternative to use indexes
                            //it by convention
                                                              //end: it is something after the last element
  for(vector<string>::iterator it = planets.begin(); it != planets.end(); it++ )
    cout << "With iterator: " << *it << endl; //to run iterator we use a reference to it

  return 0;
}



