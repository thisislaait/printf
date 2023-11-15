#include "main.h"

/**
 * print_str - Print a string
 * @str: The string to be printed
 *
 * Return: Number of characters printed
 */
int print_str(const char *str)
{
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		count++;
		str++;
	}
	return (count);
}
