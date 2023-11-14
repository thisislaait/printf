#include "main.h"
#include <stdarg.h>

/**
 * print_unsigned - Print an unsigned integer in decimal format
 * @args: The argument list containing the unsigned integer
 * @ptr: Pointer to flags_t structure (unused in this function)
 *
 * Return: Number of characters printed
 */
int print_unsigned(va_list args, flags_t *ptr)
{
	(void)ptr;
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	int digit;
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num != 0)
	{
		digit  = num % 10;
		_putchar(digit + '0');
		num /= 10;
		count++;
	}
	return (count);
}
