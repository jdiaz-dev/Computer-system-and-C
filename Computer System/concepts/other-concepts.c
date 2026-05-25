/*

* HEAP
- Heap is a region of memory your C program can use to allocate and free memory manually and dynamically at runtime.

┌─────────────────────┐  High address
│       Stack         │  ← local variables, function calls
├─────────────────────┤
│         ↓           │  stack grows downward
│                     │
│         ↑           │  heap grows upward  
├─────────────────────┤
│        Heap         │  ← malloc/free lives here
├─────────────────────┤
│        BSS          │  ← uninitialized global variables
├─────────────────────┤
│       Data          │  ← initialized global variables
├─────────────────────┤
│       Text          │  ← your compiled code
└─────────────────────┘  Low address



* SOCKET
    - A socket is a communication endpoint that allows processes to exchange data — either on the same machine or across a network.


* PROCESS
    - is a program in execution

* PROCESS TABLE
    - In Linux the process table exists — it's a fundamental kernel data structure that keeps track of all running processes.

*/