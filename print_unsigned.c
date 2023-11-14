#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_unsigned - Print an unsigned integer
 * @args: Argument list containing the unsigned integer to be printed
 *
 * Return: Number of characters printed
 */
int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[32];
	int count = 0;

	sprintf(buffer, "%u", num);
	count += print_str_arg(buffer);

	return (count);
}
