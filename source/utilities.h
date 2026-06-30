#define EXPAND_AND_STRINGIFY(macro) STRINGIFY(macro)
#ifdef __has_builtin
# if __has_builtin(__builtin_expect)
#  define unlikely(condition) __builtin_expect((condition), 0)
# endif
#endif
#ifndef unlikely
# define unlikely(condition) (condition)
#endif
#define NUMOF(array) (sizeof (array) / sizeof *(array))
#define PERROR_AND_EXIT(string) { perror(string); exit(EXIT_FAILURE); }
#define STRINGIFY(macro) #macro
