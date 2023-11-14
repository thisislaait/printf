#include "main.h"

int handle_format(char specifier, va_list args, int *count)
{
	flags_t flags;
	switch (specifier)
	{
		case 'c':
			*count += print_char(va_arg(args, int));
			break;
		case 's':
			*count += print_str(va_arg(args, char*));
			break;
		case '%':
			*count += print_percent();
			break;
		case 'b':
			*count += print_binary(va_arg(args, unsigned int));
			break;
		case 'd':
		case 'i':
			*count += print_int(va_arg(args, int));
			break;
		case 'u':
			*count += print_unsigned(args, &flags);
			break;
		case 'o':
			*count += print_octal(args, &flags);
			break;
		case 'x':
			*count += print_hex_lower(args, &flags);
			break;
		case 'X':
			*count += print_hex_upper(args, &flags);
			break;
		default:
			return (0);  /*Unsupported format specifier*/
	}
	return (1);
}
