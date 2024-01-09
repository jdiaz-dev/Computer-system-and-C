
// C language doesn't support overloading
//When some code is put in the extern “C” block, the C++ compiler ensures that the function names are un-mangled
//he compiler emits a binary file with their names unchanged
extern "C" {
	//all C style header files (stdio.h, string.h, etc) have their declarations in the extern “C” block.
	int printf(const char* format, ...);

}

// Driver Code
int main()
{
	// feo();
	printf("GeeksforGeeks");
	return 0;
}
