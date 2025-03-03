#include <stdio.h>

int main() {
    char* args[] = {"Hello", "World", "C", "Programming", NULL}; // Array of string pointers
    char** ptr = args;  // Pointer to the first element (char**)

    while (*ptr) {
        printf("%s\n", *ptr);  // Print each string
        ptr++;  // Move to the next string
    }

    return 0;
}
