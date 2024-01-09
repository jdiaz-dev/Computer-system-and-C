/* 
  - Value :it abstracts an string, array, boolean, number, etc
  - args : it is as argunments of a function in JS

*/

/* 
  * I stay here: 
    - after to execute 
      find src -type f | xargs perl -ne 'print "$1\n" if /#\s*include "([^"]+-inl.h)"/' | sort | uniq -c | sort -r | head -9
    - i am trying to move inline functions  from  55 memory_tracker-inl.h to cpp file
    
    AddNode mehod, line 
      302 -> AddNode 
      150 -> TrackField 
      274 -> Track (tyring to get oll reference of a function)
    - cheing MemoryTracker::
*/

/* 
  - participating in this issue : https://github.com/nodejs/node/issues/37080
  - check extension for c++
  - what is host object in v8 context



*/

/* 
  LEARNING C AND C++
    - learning how to display entire strcut - discarted x
    - how to display memory content x
    - how to debug in c++
    - check parameter method(*void value)
    - token concatenation in macros
    - exter c, node.h, line 1238
*/

/* 
  node
    test binding.cc
*/