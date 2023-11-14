#include "main.h"
#include <stdio.h>

/**
 * print_signed - Print a signed integer
 * @args: Argument list containing the signed integer to be printed
 *
 * Return: Number of characters printed
 */
int print_signed(va_list args)
{
	int num = va_arg(args, int);
	char buffer[32];
	int count = 0;
	
	sprintf(buffer, "%d", num);
	count += print_str_arg(buffer);
	
	return (count);
}
