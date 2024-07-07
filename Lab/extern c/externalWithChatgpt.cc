
// C language doesn't support overloading
/* 
	- The extern "C" construct is used in C++ to indicate that the enclosed declarations should follow C linkage conventions rather than C++ linkage conventions. This is important for a few reasons:
	
			1. Name Mangling: C++ compilers perform name mangling, which means that they encode additional information (like the type of arguments) into the names of functions and variables to support features like function overloading. C does not support name mangling. By using extern "C", you tell the C++ compiler to use C linkage for the specified code, which prevents name mangling and allows the C++ code to be linked with C code.

			2. Interoperability: If you want to use C++ code with C libraries or other languages that follow C calling conventions, you need to use extern "C" to ensure that the names of functions are not mangled and can be correctly linked.

			3. External Libraries: When you are working with external libraries written in C (such as many system libraries or other third-party libraries), you need to ensure that the function names are accessible from C++ code. Wrapping these function declarations in extern "C" achieves this.
 */
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
