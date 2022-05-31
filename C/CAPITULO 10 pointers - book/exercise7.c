/* 
  sort array
 */
#include <stdio.h>

#define SIZE 16

void swap(int * a, int * b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
void sortArray (int * arr)
{
  int * j;
  int * const endArray = arr + SIZE;
  for ( ; arr < endArray ; ++arr ){
    for ( j = arr + 1; j < endArray; ++j ){
      if ( *arr > *j ) {
        swap(arr, j);
      }
    }
    
  }
    
}
int main(void)
{
  int counter;
  int array[SIZE] = { 34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11 };
  
  //displaying value of 15th position of array  
  int * value = array + 15;
  printf("Check %i \n\n", *value);


  printf("Previosuly to sort array \n\n");
  for( counter = 0; counter < SIZE; ++counter){
    printf("value %i \n", array[counter]);
  }
  sortArray(array);

  printf("\nAfter to sort array \n\n");
  for( counter = 0; counter < SIZE; ++counter){
    printf("value %i \n", array[counter]);
  }
  return 0;
}



