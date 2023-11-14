#include "main.h"
#include <stdarg.h>

/**
 * print_hex - Print a hexadecimal number (lowercase)
 * @num: The hexadecimal number to be printed
 *
 * Return: Number of characters printed
 */
int print_hex_lower(unsigned int num)
{
	char *hex_digits = "0123456789abcdef";
	char hex_buffer[40]; /*  Assuming a reasonable maximum length */
	int count = 0;
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		hex_buffer[count++] = hex_digits[num % 16];
		num /= 16;
	}
	while (--count >= 0)
	{
		_putchar(hex_buffer[count]);
	}
	return (count);
}
