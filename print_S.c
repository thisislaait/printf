#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_S - Print a string with non-printable characters
 * @args: Argument list containing the string to be printed
 *
 * Return: Number of characters printed
 */

int print_S(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += print_hex_upper(str);
		}
		else
		{
			count += _putchar(*str);
		}

		str++;
	}

	return count;
}
