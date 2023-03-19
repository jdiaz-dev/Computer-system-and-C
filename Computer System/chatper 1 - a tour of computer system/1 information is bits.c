
/* 
  1.1 Information Is Bits + Context
    - Each byte represents some text character in the program
    - ASCII standard that represents each character with a unique byte-size integer value.1
    
    - The hello.c program is stored in a file as a sequence of bytes. 
    - For example, the first byte has the integer value 35, which corresponds to the character '#’.

    -The only thing that distinguishes different data objects is the context in which we view them. For example, in different contexts, the same sequence of bytes might represent an integer, floating-point number, character string, or machine instruction.


      == > sumary : all information is represented as bunch of bits, and the only thing that distingues them is the context
 */


/* 
  1.2 Programs Are Translated by Other Programs into Different Forms
    - the individual C statements must be translated by other programs into a sequence of low-level machine-language instructions.
    - These instructions are then packaged in a form called an executable object program and stored as a binary disk file. Object programs are also referred to as executable object files. 

    - The programs that perform the four phases (preprocessor, compiler, assembler, and linker) are known collectively as the compilation system.


  **sumary: the create the final executable file, it must pass for 4 steps (preprocesor, compilator, assembler and linker)
 */

/* 
  1.3 It Pays to Understand How Compilation Systems Work
 */

/* 
  1.4.1 Hardware Organization of a System
    ** Buses
      - Running throughout the system is a collection of electrical conduits called buses
      - Most machines today have word sizes of either 4 bytes (32 bits) or 8 bytes (64 bits)
      - Buses are typically designed to transfer fixed-size chunks of bytes known as words

    **Main Memory
      - Physically, main memory consists of a collection of dynamic random access memory (DRAM) chips
      - Logically, memory is organized as a linear array of bytes
      - In general, each of the machine instructions that constitute a program can consist of a variable number of bytes.
      - The sizes of data items that correspond to C program variables vary according to type

    **Processor
      - The central processing unit (CPU), or simply processor, is the engine that interprets (or executes) instructions stored in main memory. 
      - Its core is a word-size storage device (or register) called the program counter (PC).
      
      - The CPU executes the instruction pointed by the program counter and it is updated to the next instruction to be executed 

      - From the moment that the power is applied until the moment that the power is shut off the processor execute task pointer by the program counter, and update the program counter to point the next instruction  
      - The processor operate according to simple instruction execution model defined by its instruction set architecture

      - There are only few operations that revolves around of main memory, the register file (that is a collection of word-size register) and the ALU (that calculate new data and address)
      - Some operations that may carry out when the processor receive a request are:
          1. load: load a byte or a word from main memory into the register
          2. store: copy a byte or a word from register to main memory
          3. operate: copy contents from two register to the ALU and make some operations
          4. jump: extract a word from the instruction itself and put in the program counter

    reread again: Processor

 */

/* 
  1.4.2 Running the hello Program
    - After to press enter the data is loaded from disk to the register file and it is copied to the  main memory, finally it is loaded to the register files to display the result
    - Using a technique known as direct memory access (DMA, discussed in Chapter 6), the data travel directly from disk to main memory, without passing through the processor. 
 */

/* 
  1.5 Caches Matter
    - A system spends a lot of time moving information from one place to another
    - Thus, a major goal for system designers is to make these copy operations run as fast as possible.
    - It is easier and cheaper to make processors run faster than it is to make main memory run faster.

    - To deal with the processor–memory gap, system designers include smaller, faster storage devices called cache memories that serve to store temporary data
    - The L1 and L2 caches are implemented with a hardware technology known as static random access memory (SRAM)
    -Some importanto for application programmers who are aware of cache memories can exploit them to improve the performance of their programs by an order of magnitude

 */

/* 
  1.6 Storage Devices Form a Hierarchy
    The main idea of a memory hierarchy is that storage at one level serves as a cache for storage at the next lower level
  
 */

/* 
  1.7 The Operating System Manages the Hardware
    - the application interacts with the operating system and it interact with the hardware
    - All attempts by an application program to manipulate the hardware must go through the operating system
    - The operating system has two primary purposes:
        1. to protect the hardware from misuse by runaway applications
        2. to provide applications with simple and uniform mechanisms for manipulating complicated and often wildly different low-level hardware devices

    - The operating system achieves both goals via the fundamental abstractions shown in Figure 1.11: processes, virtual memory, and files

    1.7.1 Processes
      - Multiple processes can run concurrently on the same system
      - In most systems, there are more processes to run than there are CPUs to run them
      - Traditional systems could only execute one program at a time, while newer multicore processors can execute several programs simultaneously

      - To create fhe feeling of parallel execution of programs, the operating system performs this interleaving with a mechanism known as "context switching"

      - The operating system keeps track of all the state information that the process needs in order to run. This state, which is known as the context, includes information such as the current values of the PC, the register file, and the contents of main memory.

      - When the operating system decides to transfer control from the current process to some new process, it performs a context switch by saving the context of the current process, restoring the context of the new process, and then passing control to the new process.

      - The transition from one process to another process (or context switching) is managed by the operating system kernel.
      - The kernel is the portion of the operating system code that is always resident in memory
      - It is important to know that the kernel is not a separate process. Instead, it is a collection of code and data structures that the system uses to manage all the processes

      - Implementing the process abstraction requires close cooperation between both the low-level hardware and the operating system software


    1.7.2 Threads
      - Although we normally think of a process as having a single control flow, in modern systems a process can actually consist of multiple execution units, called threads, each running in the context of the process and sharing the same code and global data
      - it is easier to share data between multiple threads than between multiple processes, and because threads are typically more efficient than processes 

    1.7.3 Virtual Memory
      - Virtual memory is an abstraction that provides each process with the illusion that it has exclusive use of the main memory.
      - Each process has the same uniform view of memory, which is known as its virtual address space
      - The virtual address space seen by each process consists of a number of welldefined areas, each with a specific purpose.
      - Areas of virtual memory
          1. Program code and data: fixed address
          2. Heap:  dynamically memory at run time as a result of calls to C standard library
          3. Shared libraries: space is an area that holds the code and data for shared libraries such as the C standard library
          4. Stack: dynamically memory at run time
          5: kernel virual memory: We can access to this part of virtual memory only throught the kernel

      - The basic idea is to store the contents of a process’s virtual memory on disk and then use the main memory as a cache for the disk

    1.7.4 Files
      - A file is a sequence of bytes, nothing more and nothing less. Every I/O device, including disks, keyboards, displays, and even networks, is modeled as a file. All input and output in the system is performed by reading and writing files
 */

/* 
  1.8 Systems Communicate with Other Systems Using Networks
    - From the point of view of an individual system, the network can be viewed as just another I/O device
    - The system copies the sequence of bits sent this data to another disk drive throught the network adapter. Similarly the system can read data sent from another machines and copy and its main memory
    -  the World Wide Web, FTP, and telnet protocols are all based on the ability to copy information over a network.
 */

/* 
  1.9 Important Themes
    - An important idea to take away from this discussion is that a system is more than just hardware. It is a collection of intertwined hardware and systems software that must cooperate in order to achieve the ultimate goal of running application programs.

    1.9.1 Amdahl’s Law
      - This is the major insight of Amdahl’s law, to significantly speed up the entire system, we must improve the speed of a very large fraction of the overall system
      - To enhance the performance of the system, we need to optimize large parts of a system

    1.9.2 Concurrency and Parallelism
      - we want to things with the computer
          1. that the computer do more things
          2. that the computer be faster
      - both things are achieved when the processor do more things at once

      - We use the term "concurrency" to refer to the general concept of a system with multiple, simultaneous activities,
      - term "parallelism" to refer to the use of concurrency to make a system run faster.

      ** Thread-Level Concurrency
        - Until recently, most actual computing was done by a single processor (where the processor has to manage multiple tasks for differents process), this configuration is know as uniprocessor system
        - When we construct a system consisting of multiple processors all under the control of a single operating system kernel, we have a multiprocessor system

        - Multi-core processors have several CPUs (referred to as “cores”) integrated onto a single integrated-circuit chip.
        - The cores share higher levels of cache as well as the interface to main memory. 

        - Hyperthreading, sometimes called simultaneous multi-threading, is a technique that allows a single CPU to execute multiple flows of control. It involves having multiple copies of some of the CPU hardware

        - A single application program faster, but only if that program is expressed in terms of multiple threads that can effectively execute in parallel. 

      ** Instruction-Level Parallelism
        - At a much lower level of abstraction, modern processors can execute multiple instructions at one time, a property known as instruction-level parallelism
        - Processors that can sustain execution rates faster than 1 instruction per cycle are known assuperscalar processors.

      ** Single-Instruction, Multiple-Data (SIMD) Parallelism
        - At the lowest level, many modern processors have special hardware that allows a single instruction to cause multiple operations to be performed in parallel, a mode known assingle-instruction, multiple-data (SIMD) parallelism
        - For example, recent generations of Intel and AMD processors have instructions that can add 8 pairs of single-precision floating-point numbers (C data type float) in parallel

        
 */

// page 57 : More recent processors can sustain execution rates of 2–4 instructions per clock cycle.

/* 
  Usefull term: 
    * Program counter : A program counter (PC) is a CPU register in the computer processor which has the address of the next instruction to be executed from memory. It is a digital counter needed for faster execution of tasks as well as for tracking the current execution point.

    * Word size : "Word size" refers to the number of bits processed by a computer's CPU in one go (these days, typically 32 bits or 64 bits). Data bus size, instruction size, address size are usually multiples of the word size

    * Computer architecture: In computer engineering, computer architecture is a set of rules and methods that describe the functionality, organization, and implementation of computer systems. The architecture of a system refers to its structure in terms of separately specified components of that system and their interrelationships.
          -> block diagram of a basic computer with uniprocessor CPU: https://en.wikipedia.org/wiki/Computer_architecture#:~:text=In%20computer%20engineering%2C%20computer%20architecture,that%20system%20and%20their%20interrelationships.

          -> components of a computer: http://www.writeforreaders.com/wp-content/uploads/2020/01/IMG_20200112_191143_HDR-min.jpg

    * Instruction set architecture: An Instruction Set Architecture (ISA) is part of the abstract model of a computer that defines how the CPU is controlled by the software. The ISA acts as an interface between the hardware and the software, specifying both what the processor is capable of doing as well as how it gets done.

    * Virtual memory: En informática, la memoria virtual es una técnica de gestión de la memoria que se encarga de que el sistema operativo disponga, tanto para el software de usuario como para sí mismo, de mayor cantidad de memoria que esté disponible físicamente. 

    * Process: In computing, a process is the instance of a computer program that is being executed by one or many threads.

    * Threads: With computer programming, a thread is a small set of instructions designed to be scheduled and executed by the CPU independently of the parent process.
    The implementation of threads and processes differs between operating systems, but in most cases a thread is a component of a process

    * Hyperthreading, sometimes called simultaneous multi-threading, is a technique that allows a single CPU to execute multiple flows of control

    * Paralellism: At a much lower level of abstraction, modern processors can execute multiple instructions at one time, a property known as instruction-level parallelism

    * Clock Cycle: the amount of time between two pulses of an oscillator.

    * Oscilator: An oscillator is a mechanical or electronic device that works on the principles of oscillation
    
    * Difference between instruction and operation: Instruction is the lower level term for telling you what to do in each step, concerning registers, memory addresses etc. So an operation we write in the language can take multiple instructions in the lower level language. 

 */

/* 
  **1.9.3 The Importance of Abstractions in Computer Systems
    - A major theme in computer systems is to provide abstract representations at different levels to hide the complexity of the actual implementations
    - allow programmers to build things without having to delve into its inner workings.
 */

/* 
  1.10 Summary
    - A computer system consists of hardware and systems software that cooperate to run application programs. I 
    - Processors read and interpret binary instructions that are stored in main memory.
    - Programmers can optimize the performance of their C programs by understanding and exploiting the memory hierarchy.
  
 */

/* 
  quesitions
    how is built the tread
    parts of a thread

 */