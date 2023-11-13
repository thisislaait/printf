#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_octal - Print an unsigned integer in octal format
 * @args: Argument list containing the unsigned integer to be printed
 *
 * Return: Number of characters printed
 */
int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[32];
	int count = 0;

	sprintf(buffer, "%o", num);
	count += print_str_arg(buffer);

	return count;
}
