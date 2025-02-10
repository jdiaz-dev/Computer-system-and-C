# CREATE SHARED LIBRARY

## command to create a shared library
- g++ -shared -fPIC -o libmyclass.so myclass.cpp

## information about -fPIC
-  -fPIC : (Position-Independent Code)
- it’s essential for creating shared libraries (.so files), 
to ensure they work correctly across different programs 
without address conflicts

## Why is -fPIC important?
### Shared Libraries (.so Files): 
- Shared Libraries (.so Files) need to be loaded into 
memory at different addresses across different programs
- -fPIC ensures the code can execute correctly regardless 
of its memory location.

### Efficient Memory Usage: 
- Without -fPIC, each process using a shared library 
would need its own copy, increasing memory usage.
- With -fPIC, the library can be mapped once into memory 
and shared across multiple processes.

### Security: 
- Modern OS features like Address Space Layout 
Randomization (ASLR) require position-independent code to 
prevent predictable memory layouts, which improves security 
against exploits.

## What Happens Without -fPIC?
- If you compile a shared library without -fPIC, you might 
get linking errors or the library might not load correctly 
in different programs because it depends on fixed memory 
addresses.

## Conclusion
The -fPIC flag is essential for writing efficient, reusable, 
and secure shared libraries in Linux-based systems. 🚀


# TO USE SHARED LYBRARY
- set this env var : export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

## Explanation of previos env var
- LD_LIBRARY_PATH: This is an environment variable in 
Linux/Unix that tells the system where to look for shared 
libraries (.so files) when running a program.
- . (dot): Represents the current directory. By adding . to 
LD_LIBRARY_PATH, the system will first search for shared 
libraries in the current folder before looking in standard 
locations (like /usr/lib or /lib).
- :$LD_LIBRARY_PATH: Appends the existing paths in 
LD_LIBRARY_PATH to ensure that previously defined library 
paths are still accessible.


# TO BUILD BINARY WHO WILL USE THE SHARED LIBRARY
- g++ main.cpp -o main -L. -lmyclass

## Explanation of previous command

* -L: 
- specifies a library search path.
- . (dot) represents the current directory.  This means the 
compiler should look for libraries in the current folder 
instead of only standard locations (like /usr/lib or /lib).

* -lmyclass:
-  -l (lowercase L) tells the linker to link 
against a library named libmyclass.so or libmyclass.a.
- The linker automatically prefixes the library name with lib 
and adds .so (shared library) or .a (static library).
- So, -lmyclass means it will try to link against libmyclass.so 
or libmyclass.a.