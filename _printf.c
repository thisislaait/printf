#include "main.h"
#include <stdarg.h>

/**
 * _printf - Produces output according to a format
 * @format: Character string containing zero or more directives
 *
 * Return: Number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args,format);
	
	while (*format)
	{
		if (*format == '%' && (*(format + 1) == 'c' || *(format + 1) == 's' || *(format + 1) == '%' || *(format + 1) == 'd' || *(format + 1) == 'i'))
		{
			if (*(format + 1) == 'c')
				count += print_char(va_arg(args, int));
			else if (*(format + 1) == 's')
				count += print_str(va_arg(args,char*));
			else if (*(format + 1) == '%')
				count += print_percent();
			else if (*(format + 1) == 'd' || *(format + 1) == 'i')
			format += 2; /*move to the next character*/
		}
		else
		{
			count += _putchar(*format);
			format++;
		}
	}
	va_end(args);
	return count;
}
