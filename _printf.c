#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

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
			if (buf_ptr - buffer < 1023)
				*buf_ptr++ = *ptr;
			else
			{
				write(1, buffer, buf_ptr - buffer);
				buf_ptr = buffer;
				*buf_ptr++ = *ptr;
				count += 1024;
			}
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
				default:
					count += _putchar('%');
					count += _putchar(*ptr);
					break;
			}
			/* check buffer sixe after handling specifier */
			if (buf_ptr - buffer >= 1023)
			{
				write(1, buffer, buf_ptr - buffer);
				buf_ptr = buffer;
				count += 1024;
			}
		}
	}
	/* we'll write other remaining characters in the buffer */
	if (buf_ptr > buffer)
		write(1, buffer, buf_ptr - buffer);

	va_end(args);

	return count;
}
