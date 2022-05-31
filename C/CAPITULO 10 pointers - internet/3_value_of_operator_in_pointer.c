//value of operator, indirection operator 

#include <stdio.h>

void changingValueOfObjectPointed(); //allows to set the funciton below to main methdo
void errors();
int main(){
  changingValueOfObjectPointed();
  errors();
}
void changingValueOfObjectPointed(){
  int x = 10;
  int *ptr = &x;

  //changing value of x
  //deference operator(or value operator) in action
  printf("%d\n", *ptr);//%d : specify signed decimal integer  
  *ptr = 4;
  printf("%d\n", *ptr);
  printf("%i\n", x);
  
}
void errors(){
  //important : never apply the indirection operator to the uninitialized pointer or we will get undefined behavior
  int *number;
  printf("%d\n", *number);

  //important: assigning  value to an uninitialized operator is dangerous.
  //the error trowned will be Segmetation Fault
                            //Segmetation Fault : segmentation fault is coused when the program is trying to read or write an illegal memory location
  int *ptr;
  *ptr = 1;
}
//video 19 finished