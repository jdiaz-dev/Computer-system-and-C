/* Program to illustrate bitwise operators */

/* 
  *****IMPORTANT******
  --the AND, OR, exclusive-OR bitwise operators have lower precedence that operational(+ , - , * , /) or relational operator (<, >, <=, >=) but higher precedence that AND and logical OR operators
  --The bitwise AND is higher in precedence than the bitwise Exclusive-OR, which in turn is higher in precedence than the bitwise OR 
 --The unary ones complement operator has higher precedence than any binary operator (+ , - , * , /). 

 --bitwise AND operator has more precedence that bitwise OR operator
 */

#include <stdio.h>
int main (void)
{
  unsigned int w1 = 0525u, w2 = 0707u, w3 = 0122u;

  printf ("%o %o %o\n", w1 & w2, w1 | w2, w1 ^ w2);
  printf ("%o %o %o\n", ~w1, ~w2, ~w3);
  printf ("%o %o %o\n", w1 ^ w1, w1 & ~w2, w1 | w2 | w3);
  printf ("%o %o\n", w1 | w2 & w3, w1 | w2 & ~w3);
  printf ("%o %o\n", ~(~w1 & ~w2), ~(~w1 | ~w2)); //DeMorgan’s rule: ~(~w1 & ~w2) ~(~w1 | ~w2)
      /* 
        DeMorgan's rule
            ~(~a & ~b) = a | b
            ~(~a | ~b) = a & b 
       */
  w1 ^= w2;
  w2 ^= w1;
  w1 ^= w2;

  printf ("w1 = %o, w2 = %o\n", w1, w2);
  return 0;
}


