#include <stdio.h>

// Define the struct with a typedef
typedef struct my_struct_s {
    int id;
    const char* name;
} my_struct_t;  // <-- This allows using my_struct_t without "struct my_struct_s"
//allow to refer to the structure using my_struct_t instead of my_struct_s

int main() {
    // Declare a variable of type my_struct_t
    my_struct_t example;

    // Assign values
    example.id = 42;
    example.name = "Example Name";

    // Print values
    printf("ID: %d, Name: %s\n", example.id, example.name);

    return 0;
}
