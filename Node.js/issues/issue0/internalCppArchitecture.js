/* 


    -  isolate and context can access to environment

    environmnent {
        event loop 
        isolate: {
            context: (Object|Arraay)[]
        }
        realm:{
            context: //exits one main contenxt associated with the principal realm
            - main context assocaited with the principal realm
        }
        shadowRealm: {
            associated with subsidiary context
        }
    
    }

*/

/* 
    - Environment: 
            - nodde.js instance
    - isolate: 
                - The `v8::Isolate` class represents a single JavaScript engine instance, in particular a set of JavaScript objects that can refer to each other   (the “heap”).
                - The `v8::Isolate` is often passed to other V8 API functions, and provides some APIs for managing the behaviour of the JavaScript engine or querying about its current state or statistics such as memory usage.
                - In a typical Node.js application, the main thread and any `Worker` threads each have one `Isolate`, and JavaScript objects from one `Isolate` cannot refer to objects from another `Isolate`.
                - Garbage collection, as well as other operations that affect the entire heap, happen on a per-`Isolate` basis.

    - Realm: 
                - The `Realm` class is a container for a set of JavaScript objects and functions that are associated with a particular [ECMAScript realm][].
                - Conceptually, a realm consists of a set of intrinsic objects, an ECMAScript global environment, all of the ECMAScript code that is loaded within the scope of that global environment, and other associated state and resources.

                - A principal realm is created for each `Environment`'s main [`Context`][]
                -  A synthetic realm is created for the [`Context`][] of each [`ShadowRealm`][] constructed from the JS API.
    - Context:
                - JavaScript allows multiple global objects and sets of built-in JavaScript objects (like the `Object` or `Array` functions) to coexist inside the same heap
                - V8 refers to each of these global objects and their associated builtins as a `Context`.
    - ShadowRealm: 
                - ShadowRealms are a distinct global environment, with its own global object containing its own intrinsics and built-ins (standard objects that are not bound to global variables, like the initial value of Object.prototype).

    - Cleanup hooks: 
                - Cleanup hooks are provided that run before the [`Environment`][] 

    - Event loop

                - The main abstraction for an event loop inside Node.js is the `uv_loop_t` struct.
                - Typically, there is one event loop per thread. This includes not only the main thread and Workers, but also helper threads that may occasionally be spawned in the course of running a Node.js program.

    -  libuv handles and requests

                - Two central concepts when working with libuv are handles and requests.
                - Handles are subclasses of the `uv_handle_t` “class”, and generally refer to long-lived objects that can emit events multiple times, such as network sockets or file system watchers.
                - In Node.js, handles are often managed through a [`HandleWrap`][] subclass.
                - Requests are one-time asynchronous function calls on the event loop, such as file system requests or network write operations, that either succeed or fail.
                - In Node.js, requests are often managed through a [`ReqWrap`][] subclass.

     - AsyncWrap
                - this is related to async hook (provides tracking for asynchronous operations)
                - `AsyncWrap` is a subclass of `BaseObject` that additionally provides tracking functions for asynchronous calls.   
                -  Every `AsyncWrap` instance is associated with two numbers, the “async id” and the “async trigger id”. 
                - The “async id” is generally unique per `AsyncWrap` instance, and only changes when the object is re-used in some way.

      - JavaScript value handles
                - All JavaScript values are accessed through the V8 API through so-called handles, of which there are two types: [`Local`][]s and [`Global`][]s.

                - Global
                        -  A `v8::Global` handle (sometimes also referred to by the name of its parent class `Persistent`, although use of that is discouraged in Node.js) is a reference to a JavaScript object that can remain active as long as the engine instance is active.

                - Local
                        - A `v8::Local` handle is a temporary pointer to a JavaScript object, where “temporary” usually means that is no longer needed after the current function is done executing. 
                        - `Local` handles can only be allocated on the C++ stack.

        - Classes associated with JavaScript objects
                - `BaseObject`
                        - A frequently recurring situation is that a JavaScript object and a C++ object need to be tied together. 
                        - `BaseObject` is the main abstraction for that in Node.js, and most classes that are associated with JavaScript objects are subclasses of it. It is defined in [`base_object.h`][].
                        - The JavaScript object can be accessed as a `v8::Local<v8::Object>` by using `self->object()`, given a `BaseObject` named `self`.
                        - Accessing a `BaseObject` from a `v8::Local<v8::Object>` (frequently that is `args.This()` or `args.Holder()` in a [binding function][]) can be done using the `Unwrap<T>(obj)` function, where `T` is a subclass of `BaseObject`.
                        - A helper for this is the `ASSIGN_OR_RETURN_UNWRAP` macro that returns from the current function if unwrapping fails (typically that means that the `BaseObject` has been deleted earlier).

        - concepts from juan arbol video
            - value : is used for manage untyped objects in c++
            - args: it is a function parameter in c++
            - object : it is a object affered by c++ to javascript

*/
