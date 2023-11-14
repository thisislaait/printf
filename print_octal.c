#include "main.h"

/**
 * print_octal - Print an unsigned integer in octal format
 * @num: The unsigned integer to be printed
 *
 * Return: Number of characters printed
 */
int print_octal(unsigned int num)
{
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	int count = 0;
	char buffer[20];
	while (num > 0)
	{
		buffer[count++] = (num % 8) + '0';
		num /= 8;
	}
	for (int i = count - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}
	return (count);
}
