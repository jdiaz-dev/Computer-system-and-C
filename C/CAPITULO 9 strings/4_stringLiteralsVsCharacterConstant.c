//string literal and character contant are not the same
"H" != 'H' 
/* 
  but "H" is represented by a pointer to the character 'H'
  and 'H' is represented by an integer (ASCII Code: 72)
 */

printf("\n") != printf('n')
/* 
  printf() function expects string literal and no character constant
  printf() expects a pointer to the character not the integer
 */
//video 4 finished

