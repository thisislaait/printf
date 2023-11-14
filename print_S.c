#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_S - Custom printf function to handle %S specifier
 * @args: Variable arguments list
 *
 * Return: Number of characters printed
 */
int print_S(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
	{
		count += _printf("(null)");
		return (count);
	}

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += _putchar((*str >> 4) + '0');
			count += _putchar((*str & 0xF) + '0');
		}
		else
		{
			count += _putchar(*str);
		}

		str++;
	}

	return (count);
}
