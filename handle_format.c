#include "main.h"
#include <stdio.h>

int handle_format(char specifier, va_list args, int *count)
{

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
			*count += *print_binary(va_arg(args, unsigned int));
			break;
		case 'd':
		case 'i':
			*count += print_int(va_arg(args, int));
			break;
		case 'R': 
			/*count += *print_rot13(va_arg(args, flags_t *ptr));*/
			break;
		case 'p':
			*count += print_address(va_arg(args, char*));
			break;
		default:
			return (0);  /*Unsupported format specifier*/
	}
	return (1);
}
