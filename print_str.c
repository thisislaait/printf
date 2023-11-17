#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_str - Handles %s specifier
 * @args: The va_list of arguments
 * @count: Pointer to the count of characters printed
 * @flags: Pointer to the flags_t structure
 * Return: 1 if specifier is handled, 0 otherwise
 */
int print_str(va_list args, int *count, flags_t *flags)
{
		char *str = va_arg(args, char *);

		if (flags->hash)
		{
			*count += _putchar('[');
		}
		if (str == NULL)
		{
			handle_null(count);
		}
		else
		{
			while (*str)
			{
				*count += _putchar(*str);
				str++;
			}
		}
		if (flags->hash)
		{
			*count += _putchar(']');
		}
		return (1);
}
