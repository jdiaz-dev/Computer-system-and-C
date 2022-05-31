#include <stdio.h>
/* 
  sort method with arrays
 */

void swap(int *first, int *second){
  int temp = *first;
  *first = *second;
  *second = temp;
}
void sort(int *a, int *b, int *c){
  if(*a > *b)
    swap(a, b);

  if(*a > *c)
    swap(a, c);

  if(*b > *c){
    swap(b, c);
  }
}
int main(void)
{
  int i1 = 101, i2 = 345, i3 = 34;
  printf("%i %i %i \n", i1, i2, i3);
  sort(&i1, &i2, &i3);
  printf("%i %i %i \n", i1, i2, i3);

}


