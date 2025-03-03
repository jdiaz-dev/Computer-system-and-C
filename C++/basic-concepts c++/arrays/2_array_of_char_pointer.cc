#include <iostream>
#include <cstring>  // For strdup
using namespace std;

int main() {
    int argc = 3;  // Number of arguments

    // Step 1: Allocate an array of char pointers
    char** args = new char*[argc + 1];  // +1 for NULL termination

    // Step 2: Assign some strings to the array (simulating command-line arguments)
    args[0] = strdup("ls");      // strdup allocates memory and copies the string
    args[1] = strdup("-lh");
    args[2] = strdup("/usr");

    args[argc] = nullptr;  // NULL termination

    // Step 3: Print the stored strings
    for (int i = 0; args[i] != nullptr; i++) {
        cout << "args[" << i << "] = " << args[i] << endl;
    }

    // Step 4: Free memory
    for (int i = 0; args[i] != nullptr; i++) {
        free(args[i]);  // Free each allocated string
    }
    delete[] args;  // Free the array of pointers

    return 0;
}
