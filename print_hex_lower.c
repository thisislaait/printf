#include "main.h"
#include <stdarg.h>

/**
 * print_hex - Print a hexadecimal number (lowercase)
 * @args: The argument list containing the hexadecimal number
 * @ptr: Pointer to flags_t structure (unused in this function)
 * Return: Number of characters printed
 */
int print_hex_lower(va_list args, flags_t *ptr)
{
	(void)ptr;
	unsigned int num;
	char hex_buffer[40]; /*  Assuming a reasonable maximum length */
	int count = 0;
	num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		hex_buffer[count++] = "0123456789abcdef"[num % 16];
		num /= 16;
	}
	while (--count >= 0)
	{
		_putchar(hex_buffer[count]);
	}
	return (count);
}
