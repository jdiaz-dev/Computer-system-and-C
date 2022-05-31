

char *ptr = "Hello World" 
//string literal is equivalent to point to the first character of the string literal
//therefore, we can subscript and get some character of string literal
//more details, see the next video : youtube.com/watch?v=hiO_j137K48&list=PLBlnK6fEyqRhwQbYrTDZYJaB4z1YgsAPW&index=3


//string literal cannot modified, it causes undefined behavior
char *ptr = "Hello"
*ptr = 'M' // <-------------not allowed

//strings literals are knowed as contants
//they have been allocated a read only memory. So we can alter them

//But character pointer itself has been allocated read-write memory. So the same pointer can point to some other string literal

