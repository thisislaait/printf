#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * handle_format - Handles the format specifier and updates count
 * @specifier: The format specifier character
 * @args: The va_list of arguments
 * @count: Pointer to the count of characters printed
 * @flags: Pointer to the flags_t structure
 * Return: 1 if specifier is handled, 0 otherwise
 */
int handle_format(char specifier, va_list args, int *count, flags_t *flags)
{
	switch (specifier)
	{
		case 'c':
			return (print_char(args, count, flags));
		case 's':
			return (print_str(args, count, flags));
		case '%':
			return (print_percent(count));
		case 'b':
			*count += print_binary(args);
			break;
		case 'd':
		case 'i':
			*count += print_int(args);
			break;
		case 'u':
			*count += print_unsigned(args);
			break;
		case 'o':
			*count += print_octal(args);
			break;
		case 'x':
			*count += print_hex(args, 0);
			break;
		case 'X':
			*count += print_hex(args, 1);
			break;
		case 'p':
			*count += print_pointer(args);
			break;
		case 'S':
			return (print_string(args));
		case 'R':
			/*count += *print_rot13(va_arg(args, flags_t *ptr));*/
			break;
		default:
			return (0);  /*Unsupported format specifier*/
	}
	return (1);
}
