#include "main.h"

/**
 *  _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 *  Return: length of the formatted output string
 *
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int done;

	va_start(arg, format);
	done = vfprintf(stdout, format, arg);
	va_end(arg);

	return (done);
}
