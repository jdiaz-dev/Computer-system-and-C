#include <cstdio>

int main() {
    // Open a file in write mode
    FILE *file = fopen("output.txt", "w");

    if (file == nullptr) {
        perror("Error opening file");
        return 1;
    }

    // Writing formatted data to the file using fprintf
    fprintf(file, "Name: %s\n", "John Doe");
    fprintf(file, "Age: %d\n", 30);
    fprintf(file, "Height: %.2f meters\n", 1.75);

    // Close the file
    fclose(file);

    printf("Data successfully written to output.txt\n");
    
    return 0;
}
