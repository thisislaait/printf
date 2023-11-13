#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _printf - Custom printf function
 * @format: Format string with conversion specifiers
 *
 * Return: Number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *ptr;

	va_start(args, format);

	if (format == NULL)
		return -1;

	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr != '%')
		{
			count += _putchar(*ptr)
		}
		else
		{
			ptr++; /* Move to the character after '%' */
			switch (*ptr)
			{
				case 'c':
					count += print_char(args);
					break;
				case 's':
					count += print_str(args);
					break;
				case 'b':
					count += print_int(args);
					break;
				case 'd':
				case 'i':
					count += print_int(args);
					break;
				case '%':
					count += print_percent(args);
					break;
				case 'u':
					count += print_unsigned(args);
					break;
				case 'o':
					count += print_octal(args);
					break;
				case 'x':
					count += print_hex_lower(args);
					break;
				case 'X':
					count += print_hex_upper(args);
					break;
				case 'S':
					count += print_S(args);
					break;
				default:
					count += _putchar('%');
					count += _putchar(*ptr);
					break;
			}
		}
	}

	va_end(args);

	return count;
}
