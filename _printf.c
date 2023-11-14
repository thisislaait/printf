#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: Character string containing zero or more directives
 *
 * Return: Number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	int count = 0;
	
	while (*format)
	{
		if (*format == '%' && (*(format + 1) == 'c' || *(format + 1) == 's' || *(format + 1) == '%'))
		{
			if (*(format + 1) == 'c')
				count += print_char(*((char *)(format + 2)));
			else if (*(format + 1) == 's')
				count += print_str((const char *)(format + 2));
			else
				count += print_percent();
			format += 2; /*move to the next character*/
		}
		else
		{
			count += _putchar(*format);
			format++;
		}
	}
	return (count);
}
