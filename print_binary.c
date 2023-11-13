#include "main.h"
#include <stdio.h>

/**
 * print_binary - Print an unsigned integer in binary format
 * @num: Unsigned integer to be printed
 *
 * Return: Number of characters printed
 */
int print_binary(unsigned int num)
{
	if (num == 0)
		return _putchar('0');

	if (num == 1)
		return _putchar('1');

	return print_binary(num >> 1) + _putchar('0' + (num & 1));
}
