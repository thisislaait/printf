#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_hex_upper - Print an unsigned integer in uppercase hexadecimal format
 * @args: Argument list containing the unsigned integer to be printed
 *
 * Return: Number of characters printed
 */
int print_hex_upper(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[32];
	int count = 0;

	sprintf(buffer, "%X", num);
	count += print_str_arg(buffer);

	return count;
}