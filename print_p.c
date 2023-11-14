#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_p - Print a pointer address
 * @args: The va_list containing the argument
 *
 * Return: Number of characters printed (excluding null byte)
 */

int print_p(va_list args)
{
	void *ptr = va_arg(args, void *);
	
	if (ptr == NULL)
		return _printf("(nil)");
	
	return _printf("%p", ptr);
}
