#include <stdio.h>

/* 
  - the preprocesor previosly analyze these statements before C program take place

  - the advantages to use macros over functions is what we don't need specify argument type
  - the disadvantage is that macros use more memory that a defined function, but to the function take more time be called
 */


// ------------------------in C definitions are named also MACROS
//defined names is not a variable, therefore we can't change this value
//after a name is defined inside or outside of a function, it can be used in any of the program 
#define YES 1 //defined program constant
              //where we use this value (YES), it will be replaced by the processor
#define NO 0 


/* ------------------complex type of definitions */
#define PI 3.141592654
#define TWO_PI 2 * PI//we can store operations

#define LEFT_SHIFT_1 << 2; //valid expression
#define MY_AND &&
#define MY_OR ||
#define EQUALS ==
#define YEAR 201
#define IS_LEAP_YEAR YEAR % 4 == 0 && YEAR % 100 != 0 || YEAR % 400 == 0  //use backslash for long statement

                          //to void pitalls we need to use parenthesis
#define IS_LEAP_YEAR_TWO(y) ((y) % 4 == 0 && (y) % 100 != 0 \
  || (y) % 400 == 0)    //we can pass arguments to define


#define MAX(a,b) ( ((a) > (b)) ? (a) : (b) )
#define IS_LOWER_CASE(x) ( ((x) >= 'a') && ((x) <= 'z') )
#define TO_UPPER(x) ( IS_LOWER_CASE (x) ? (x) - 'a' + 'A' : (x) )
#define debugPrintf(...) printf ("DEBUG:" _ _VA_ARGS_ _);
#define feo() printf("hi, you are ugly") //we can use printf in definitions

void moreDefineStatements(){
  printf("-------------------- MORE DEFINED VALUES --------------------\n");
  printf("-------------PI = %e\n", TWO_PI);


  int x = 234 LEFT_SHIFT_1; //works!
  int y = 20, z = 30;
  int number = 2019;
  printf("-------------x = %i\n", x);

  if(y == 20 MY_AND y < z){
    printf("-------- y is lower? : true \n");
  }

  printf("-------------is leap year?:  %i\n", IS_LEAP_YEAR);
  printf("-------------is leap year 2 ?:  %i\n", IS_LEAP_YEAR_TWO(2020));
  printf("-------------is leap year 2 ?:  %i\n", IS_LEAP_YEAR_TWO(number + 1)); //this is a pitfall due that IS_LEAP_YEAR_TWO is taking literal (number + 1) more no value calculated

  printf("-------------max:  %i\n", MAX(y + z, number) *100 );
  printf("-------------is lower case:  %i\n", IS_LOWER_CASE('c') );
  printf("-------------to upper:  %c\n", TO_UPPER('c') );
  TO_UPPER('c');
  feo();

  // --------------------- it doesn't work
  // debugPrintf("Hello world!\n");
  // debugPrintf("i = %i, j = %i\n", i, j);
}

int isEven (int number)
{
  int answer;
  if ( number % 2 == 0 )
    answer = YES;
  else
    answer = NO;

  return answer;
}
int main(void){
  int isEven (int number);

  if ( isEven (17) == YES )
    printf ("yes \n");
  else
    printf ("no \n");

  if ( isEven (20) == YES )
    printf ("yes\n");
  else
    printf ("no\n");

  moreDefineStatements();

  return 0;
}
//page 360 finished



