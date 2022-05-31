#include <stdio.h>

int main(void)
{

  //declaring struct
  struct date 
  {
    int month; 
    int day;
    int year;
  };

  struct date today; // today: variable today with type date

  today.month = 9;
  today.day = 25;
  today.year = 2005;
                            //%.2i : to ensure to digits for year
  printf("Toda's date is  %i/%i/%.2i. \n", today.month, today.day, today.year % 100);

  return 0;
}

//I stayed here: Using Structures in Expressions



