#include <iostream>

using namespace std;

enum Gender {
  man,
  woman
};

int basalMetabolism  (
  int weightInKg,
  int heightInCm,
  int age,
  string gender
)  {
  int withGender = (gender == "man" )? +5 : -161;

  return (10 * weightInKg) + (6.25 * heightInCm) - (5 * age) + withGender;
};

int main(){
  float activityFactor = 1.55;
  int man = (basalMetabolism(54, 164, 28, "man") * activityFactor);
  
  int caloriesAmount = 200; 
  int manLoosingFat = man + caloriesAmount;

  cout << manLoosingFat << endl;
  return 0;
}

/* 
  * activity factor
    - sedentary (person that don't train)                 x 1.2
    - quiet (train from one to twice in the week)         x 1.35
    - active moderately (from 2 to 4 days in the week)    x 1.55
    - very active (from 5 to 7 day in the week)           x 1.725
    - extra active (his work demand physical effort)      x 1.9

    - at the beginning go 1 less, to gain a litle bit margin
*/

/* 
  macros distribution
    - 1.8 - 2.2 g of protein for muscle mass
*/