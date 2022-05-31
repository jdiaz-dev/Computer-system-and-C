
//the value for EXISTS definition will be assigned accoring the UNIX definition, we can assign UNIX value through terminal at compilation time
#ifdef UNIX
#define EXISTS "yes!!"
#else
#define EXISTS "no!!"
#endif



