#include <stdio.h>

int main (void) {
  struct date {
    int month;
    int day;
    int year;
  };

  struct date today, *datePointer; //datePointer is a pointer to a structure of type date, not a struct itself
  datePointer = &today;

  //the parenthesis is required because the member (accessing to member of struct) of structure  .  has more precedence than the indirection operator *
  (*datePointer).day = 21;
  
  //datePointer.day = 22; //imposible to realize it because it is a pointer to a structure, not a structure itself

  //or

  //with structure pointers we can use other operator  
  datePointer->month = 12;
  datePointer->year = 2015;

  printf("Today's date is %i/%i/%.2i.\n", today.day, today.month, today.year % 100);
  printf("datePointer's date is %i/%i/%.2i.\n", datePointer->day, datePointer->month,  datePointer->year % 100);
}

//Structures Containing Pointers

