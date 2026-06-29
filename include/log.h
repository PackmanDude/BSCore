#ifndef BSCORE_LOG
#define BSCORE_LOG

#include <stdarg.h>

void bscore_log_log(const char * restrict s);
void bscore_log_log_formatted(const char * restrict format, ...);
void bscore_log_variadic_log_formatted(const char * restrict format, va_list ap);
void bscore_log_error(const char * restrict s);
void bscore_log_error_formatted(const char * restrict format, ...);
void bscore_log_variadic_error_formatted(const char * restrict format, va_list ap);

#endif
