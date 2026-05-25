/* 

File descriptor 
- A file descriptor is simply an integer that represents an open resource in the kernel.


*/
int fd = open("file.txt", O_RDONLY);
// fd is now an integer like 3, 4, 5...

// That integer is an index into a per-process table the kernel maintains, pointing to the actual open file/resource.