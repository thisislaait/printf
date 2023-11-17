#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Handles %c specifier
 * @args: The va_list of arguments
 * @count: Pointer to the count of characters printed
 * @flags: Pointer to the flags_t structure
 * Return: 1 if specifier is handled, 0 otherwise
 */

int print_char(va_list args, int *count, flags_t *flags)
{
		char c = va_arg(args, int);
		/* Check for flag characters */
    	if (flags->add)
    	{
        	if (c >= 0)
            	*count += _putchar('+');
    	}
    	else if (flags->space)
    	{
        	if (c >= 0)
            	*count += _putchar(' ');
    	}

		*count += _putchar(c);
		return (1);
}
