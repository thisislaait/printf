#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_hex_lower - Print an unsigned integer in lowercase hexadecimal format
 * @args: Argument list containing the unsigned integer to be printed
 *
 * Return: Number of characters printed
 */
int print_hex_lower(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[32];
	int count = 0;

	sprintf(buffer, "%x", num);
	count += print_str_arg(buffer);

	return count;
}
