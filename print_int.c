#include "main.h"
#include <stdarg.h>

/**
 * print_int - Print an integer based on the format specifier
 * @args: Argument list containing the integer to be printed 
 * Return: Number of characters printed 
 */

int print_int(va_list args)
{
	int num = va_arg(args, int);
	printf("%d", num);
}
