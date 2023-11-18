#include "main.h"

/**
 * print_unsigned - Prints an unsigned number
 * @types: List of arguments
 * @buffer: Buffer array to handle printing
 * @flags: Calculates active flags for formatting
 * @width: Width specifier
 * @precision: Precision specifier
 * @size: Size specifier
 * Return: No of characters printed.
 */
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}

	i++;

	return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}

/**** OCTAL  ****/
/**
 * print_octal - Output an unsigned number in octal format
 * @types: Argument list
 * @buffer: Array for managing output
 * @flags: Computed formatting flags
 * @width: Specified width
 * @precision: Defined precision
 * @size: Size indicator
 * Return: Number of characters printed
 */
int print_octal(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{

	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num % 8) + '0';
		num /= 8;
	}

	if (flags & F_HASH && init_num != 0)
		buffer[i--] = '0';

	i++;

	return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}

/**** HEXADECIMAL ****/
/**
 * print_hexadecimal - Output an unsigned number in hexadecimal format
 * @types: Argument list
 * @buffer: Array for managing output
 * @flags: Computed formatting flags
 * @width: Specified width
 * @precision: Defined precision
 * @size: Size indicator
 * Return: Number of characters printed
 */
int print_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	return (print_hexa(types, "0123456789abcdef", buffer,
		flags, 'x', width, precision, size));
}

/**** UPPER HEXADECIMAL ****/
/**
 * print_hexa_upper - Output an unsigned number in uppercase hexadecimal format
 * @types: Argument list
 * @buffer: Array for managing output
 * @flags: Computed formatting flags
 * @width: Specified width
 * @precision: Defined precision
 * @size: Size indicator
 * Return: Number of characters printed
 */
int print_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	return (print_hexa(types, "0123456789ABCDEF", buffer,
		flags, 'X', width, precision, size));
}

/**** HEXX NUM FOR LOWER OR UPPER ****/
/**
 * print_hexa - Output a hexadecimal number in lowercase or uppercase
 * @types: Argument list
 * @map_to: Array of values to map the number to
 * @buffer: Array for managing output
 * @flags: Computed formatting flags
 * @flag_ch: Computed flag character
 * @width: Specified width
 * @precision: Defined precision
 * @size: Size indicator
 * Return: Number of characters printed
 */
int print_hexa(va_list types, char map_to[], char buffer[],
	int flags, char flag_ch, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = map_to[num % 16];
		num /= 16;
	}

	if (flags & F_HASH && init_num != 0)
	{
		buffer[i--] = flag_ch;
		buffer[i--] = '0';
	}

	i++;

	return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}