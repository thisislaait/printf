#include "main.h"
#include <stdarg.h>

/**
 * print_octal - Print an octal number
 * @args: The argument list containing the octal number
 * @ptr: Pointer to flags_t structure (unused in this function)
 *
 * Return: Number of characters printed
 */
int print_octal(va_list args, flags_t *ptr)
{
	(void)ptr;
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	int octal_num[100]; /* Assuming a reasonable maximum length */
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		octal_num[count++] = num % 8;
		num /= 8;
	}
	while (--count >= 0)
	{
		_putchar(octal_num[count] + '0');
	}
	return (count);
}
