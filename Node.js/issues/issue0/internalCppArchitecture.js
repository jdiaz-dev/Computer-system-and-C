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
    - ShadowRealm: 
            - ShadowRealms are a distinct global environment, with its own global object containing its own intrinsics and built-ins (standard objects that are not bound to global variables, like the initial value of Object.prototype).

    - Cleanup hooks: 
            - Cleanup hooks are provided that run before the [`Environment`][] 
*/
