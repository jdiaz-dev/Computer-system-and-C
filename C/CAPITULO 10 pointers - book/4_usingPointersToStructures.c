#include <stdio.h>

int main (void) {
  struct date {
    int month;
    int day;
    int year;
  };

  struct date today, *datePointer;
  datePointer = &today;

  //the parenthesis is required because the member (accessing to member of struct) of structure  .  has more precedence than the indirection operator *
  (*datePointer).day = 21;

  //or

  //with structure pointers we can use other operator  
  datePointer->month = 12;
  datePointer->year = 2015;

  printf("Today's date is %i/%i/%.2i.\n", today.day, today.month, today.year % 100);
  printf("datePointer's date is %i/%i/%.2i.\n", datePointer->day, datePointer->month,  datePointer->year % 100);
}

//Structures Containing Pointers

