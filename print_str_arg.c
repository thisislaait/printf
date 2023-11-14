#include "main.h"

/**
 * print_str_arg - Print a string
 * @str: The string to be printed
 *
 * Return: Number of characters printed
 */
int print_str_arg(const char *str)
{
	int count = 0;

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}

	return count;
}
