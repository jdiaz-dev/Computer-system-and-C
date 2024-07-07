#include <stdio.h> 

extern "C" void node_module_register() {
	//all C style header files (stdio.h, string.h, etc) have their declarations in the extern “C” block.
	// int printf(const char* format, ...);
    printf("feo eres");
}

// Driver Code
int main()
{
	// feo();
	node_module_register();
	return 0;
}