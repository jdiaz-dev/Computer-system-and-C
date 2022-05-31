#include<stdio.h>
void pointingToAnotherPointer();
void pointersAssignment();
void homework();
int main(){
  pointingToAnotherPointer();
  pointersAssignment();
  homework();
}
void pointersAssignment(){
  int i = 10;
  int *p, *q;
  p = &i; //pointer "p" is pointing to memory direction of i
  q = p;  //pointer "q" is pointing to memory direction of p (where it is equal to "i" memory direction)
  printf("%d %d\n\n", *p, *q);//the result will be value of the memory direction
}
void pointingToAnotherPointer(){
  int i = 10, j = 20;
  int *p, *q;
  p = &i; //pointing to memory addres of "i"
  q = &j; //pointing to memory addres of "j"

  //replacing 20 by 10
  *q = *p; //trying to access the content fo the location which is pointed by "p"
        // asterisc(*) : it is the value operator, which help us to take the value stored at the location pointed by the pointer

  printf("pointingToAnotherPointer:  %d\n\n", *q);
}
void homework(){
  int i = 1;
  int *q, *p = &i;
  q = p; //assigning "p" to "q" including memory direction
  printf("check 1%p, %p\n", q, p);
  *q = 5; //we can change "i" and "p" since *q pointer due that all these are pointing to the same memory direction
  printf("check 2 %d / %d", *p, i);
}
//video 20 finished