
/* 
  ** 1.1 Information Is Bits + Context
    - Each byte represents some text character in the program
    - ASCII standard that represents each character with a unique byte-size integer value.1
    
    - The hello.c program is stored in a file as a sequence of bytes. 
    - For example, the first byte has the integer value 35, which corresponds to the character '#’.

    -The only thing that distinguishes different data objects is the context in which we view them. For example, in different contexts, the same sequence of bytes might represent an integer, floating-point number, character string, or machine instruction.


      == > sumary : all information is represented as bunch of bits, and the only thing that distingues them is the context
 */


/* 
  ** 1.2 Programs Are Translated by Other Programs into Different Forms
    - the individual C statements must be translated by other programs into a sequence of low-level machine-language instructions.
    - These instructions are then packaged in a form called an executable object program and stored as a binary disk file. Object programs are also referred to as executable object files. 

    - The programs that perform the four phases (preprocessor, compiler, assembler, and linker) are known collectively as the compilation system.


  **sumary: the create the final executable file, it must pass for 4 steps (preprocesor, compilator, assembler and linker)
 */

/* 
  ** 1.3 It Pays to Understand How Compilation Systems Work
 */

/* 
  ** 1.4.1 Hardware Organization of a System
    ** Buses
      - Most machines today have word sizes of either 4 bytes (32 bits) or 8 bytes (64 bits)
      -Buses are typically designed to transfer fixed-size chunks of bytes known as words

    **Main Memory
      - Physically, main memory consists of a collection of dynamic random access memory (DRAM) chips
      - Logically, memory is organized as a linear array of bytes
      - In general, each of the machine instructions that constitute a program can consist of a variable number of bytes.
      - The sizes of data items that correspond to C program variables vary according to type

    **Processor
      - The central processing unit (CPU), or simply processor, is the engine that interprets (or executes) instructions stored in main memory. 
      - Its core is a word-size storage device (or register) called the program counter (PC).
      
      - The CPU executes the instruction pointed by the program counter and it is updated to the next instruction to be executed 


    reread again: Processor

 */

/* 
  Usefull term: 
    Program counter : A program counter (PC) is a CPU register in the computer processor which has the address of the next instruction to be executed from memory. It is a digital counter needed for faster execution of tasks as well as for tracking the current execution point.

    Word size : "Word size" refers to the number of bits processed by a computer's CPU in one go (these days, typically 32 bits or 64 bits). Data bus size, instruction size, address size are usually multiples of the word size

    Computer architecture: In computer engineering, computer architecture is a set of rules and methods that describe the functionality, organization, and implementation of computer systems. The architecture of a system refers to its structure in terms of separately specified components of that system and their interrelationships.
          -> block diagram of a basic computer with uniprocessor CPU: https://en.wikipedia.org/wiki/Computer_architecture#:~:text=In%20computer%20engineering%2C%20computer%20architecture,that%20system%20and%20their%20interrelationships.

          -> componets of a computer: http://www.writeforreaders.com/wp-content/uploads/2020/01/IMG_20200112_191143_HDR-min.jpg

 */