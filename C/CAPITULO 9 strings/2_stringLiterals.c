/* 
  ['e','a','r',t,'h', '\0']  //it need only six bits

  --strings are stored in an array of characters
  --an \0 set end of the characters (NULL character)
  --un total de 6 bits de memoria de solo lectura se asignan a la anterior de literal de cadena
  --in C, compiler treats a string literal as a pointer to the string literal
  --in the above example, every character is pointing to "e"
  --both printf and scanf functions expects a character pointer (char*) as an argument


    print("Earth");
  --Passing "Earth" is equivalent to pointer to letter "E"
  --printf literal will search \0
 */





