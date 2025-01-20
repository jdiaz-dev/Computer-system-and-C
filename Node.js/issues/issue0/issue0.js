/* 
  * issue x
    - participating in this issue : https://github.com/nodejs/node/issues/46210
        * step to step
          - check Worker::getHeapSnapshot in c++
          - check worker class in c++ 
          - check binging namespaces
          - check documentattion node.js c++ codebase
                -checking event loop in node c++ documentation (event_loop, environment, isolate) environment in c++
          - cheking creation on woker in c++ (it another an v8::environment)
          - build cpp internals architecture
          - check event loop and libuv in doc
          - ask for diagrams for internals architecture
          - check asyncWrap, Local, Global Object, JavaScript value handles, 
          - check native takeHeapSnapshot 
          - cheking worker pointer instead of instantiation
          
          
          - internal_field,
          - check if it is possible import function from very nested header file
          - check with juan arbol arguments in c++
          - check this syntax: RequestInterrupt([taker = std::move(taker), env, options]( , mutable
          - build the debugger mode
          //here: try to debug with compliled code, 

    * target: 
      - use node::solve Segmentation fault (core dumped)
   
    * context:

*/

/* 
  todo c++
    - ASSIGN_OR_RETURN_UNWRAP : implement content of this macro

*/

/* 
  * questions 
      - how to reproduce error in compiled code
      

*/

/* 
  possible PRs
     use ecmascript code in event emitters

*/