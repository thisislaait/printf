#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_int - Print an integer based on the format specifier
 * @args: Argument list containing the integer to be printed
 *
 * Return: Number of characters printed
 */
int print_int(va_list args)
{
	int num = va_arg(args, int);
	char buffer[32];  // Adjusting the size
	int count = 0;

	sprintf(buffer, "%d", num);  // Let's Use sprintf to convert to string
	count += print_str_arg(buffer);

	return count;
}
