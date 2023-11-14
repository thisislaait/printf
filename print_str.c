#include "main.h"
#include <stdarg.h>

/**
 * print_str - Print a string
 * @args: Argument list containing the string to be printed
 *
 * Return: Number of characters printed
 */
int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}

<<<<<<< HEAD
	return count;
=======
	return (count);
>>>>>>> 847f9bcf73fb5b9f153c4512f60e04d32265fb33
}
