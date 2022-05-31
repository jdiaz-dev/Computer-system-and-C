
#include <stdio.h>

/* 
  --Pointers to arrays generally result in code that uses less memory and executes faster
  --is possible make comparison between pointers: we can use pointers to compare it to a pointer to the last element of an array
 */
int main(void)
{
  int arraySum (int array[], const int n);
  int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9 , 1, -5 };

  printf("The sum is %i\n", arraySum(values, 10)); //really was passed a pointer to values
  return 0;
}
int arraySum(int array[], const int n){
  int sum = 0, *ptr;

            //using arrayEnd for optimization reason, it may save time when we sum many numbers
  int * const arrayEnd = array + n; //setting arrayEnd pointer to position "n"  (in this case end position)

  //ptr = array: pointing to the first element of the array 
  //ptr = array: it is also possible use ptr = &array[0] 
  for(ptr = array; ptr < arrayEnd; ++ptr){// ++ptr : pointing to the next position of the array
                                          //it is also possible to use:  ptr + 1  or
    sum += *ptr; 
  }
  return sum;
}
/* 
  ********* A Slight Digression About Program Optimization *********
  --the process of indexing an array takes more time than the process of accessing the contents of a pointer. This is the main reason because the pointers is used to access to elements of an array, it last only if the access is sequential
 */

