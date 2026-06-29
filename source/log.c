#include <stdio.h>
#include "log.h"

// TODO: Perform logging in a separate thread.

void
bscore_log_log(const char * restrict string)
{
	puts(string);
}

void
bscore_log_log_formatted(const char * restrict format, ...)
{
	va_list arguments;
	va_start(arguments, format);
	vprintf(format, arguments);
	va_end(arguments);
}

void
bscore_log_variadic_log_formatted(const char * restrict format, va_list arguments)
{
	vprintf(format, arguments);
}

void
bscore_log_error(const char * restrict string)
{
	fprintf(stderr, "%s\n", string);
}

void
bscore_log_error_formatted(const char * restrict format, ...)
{
	va_list arguments;
	va_start(arguments, format);
	vfprintf(stderr, format, arguments);
	va_end(arguments);
}

void
bscore_log_variadic_error_formatted(const char * restrict format, va_list arguments)
{
	vfprintf(stderr, format, arguments);
}
