#include <stdio.h>

/*
    *Operation On Pointers
    --only is allowed substracion of two pointers
*/
int stringLength (const char *string)
{
    const char *cptr = string;

    while(*cptr){
        ++cptr;
        printf("--value character--%i\n", *cptr); //checking value of character
        printf("--value pointer hexadecimal and integer-- %p,  integer = %i \n", cptr, cptr);
    }
    // printf("-----cptr out of loop %i\n", cptr);
    // printf("-----string out of loop %c\n", string);
        //cptr : value is 0
        //string : value is 17
    return cptr - string;
}
int main(void)
{
    int stringLength(const char *string);

    printf("%i\n", stringLength("stringLength test"));
    printf("%i\n", stringLength(""));
    printf("%i\n", stringLength("complete"));
}

