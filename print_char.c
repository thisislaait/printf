#include "main.h"
#include <stdarg.h>

/**
 * print_char - Handles %c specifier
 * @args: The va_list of arguments
 * @count: Pointer to the count of characters printed
 * Return: 1 if specifier is handled, 0 otherwise
 */

int print_char(va_list args, int *count)
{
		char c = va_arg(args, int);
		*count += _putchar(c);
		return (1);
}
