#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && handle_format(*(format + 1), args, &count))
		{
			format += 2; /* Move to the next character */
		}
		else
		{
			count += _putchar(*format);
			format++;
		}
	}

	va_end(args);
	return (count);
}
