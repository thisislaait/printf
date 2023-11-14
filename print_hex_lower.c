#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_hex_lower - Print an unsigned integer in lowercase hexadecimal format
 * @args: Argument list containing the unsigned integer to be printed
 *
 * Return: Number of characters printed
 */
int print_hex_lower(va_list args, int alt)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[32];
	int count = 0;

	if (alt)
	{
		count += _putchar('0');
		count += _putchar('x');
	}

	sprintf(buffer, "%x", num);
	count += print_str_arg(buffer);

	return (count);
}
