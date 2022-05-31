#if OS == 1 /* Mac OS */
# define NAME "jonathan"
#elif OS == 2 /* Windows */
# define NAME "alejandro"
#elif OS == 3 /* Linux */
# define NAME "jonathan alejandro"
#else
# define NAME "without name"
# undef NAME //to become undefined to definition
#endif