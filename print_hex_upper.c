#include "main.h"
#include <stdarg.h>

/**
 * print_hex_upper - Print a hexadecimal number (uppercase)
 * @args: The argument list containing the hexadecimal number
 * @ptr: Pointer to flags_t structure (unused in this function)
 *
 * Return: Number of characters printed
 */
int print_hex_upper(va_list args, flags_t *ptr)
{
	(void)ptr;
	unsigned int num = va_arg(args, unsigned int);
	char hex_buffer[40]; /* Assuming a reasonable maximum length */
	int count = 0;
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		hex_buffer[count++] = "0123456789ABCDEF"[num % 16];
		num /= 16;
	}
	while (--count >= 0)
	{
		_putchar(hex_buffer[count]);
	}
	return (count);
}
