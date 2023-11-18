#include "main.h"

/**
 * is_printable - Assess if a character is printable
 * @c: Character to be assessed.
 *
 * Return: 1 if the character is printable, 0 otherwise.
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Add hexadecimal ASCII code to the buffer
 * @i: Index to start appending.
 * @buffer: Array of characters.
 * @ascii_code: ASCII code.
 *
 * Return: Always 3.
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Check if a character is a digit
 * @c: Character for evaluation.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - Transform a number to the designated size
 * @num: Number from casting.
 * @size: Type indicator for operation.
 *
 * Return: Value of cast num.
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - Modify a number to the specified size
 * @num: Number to undergo casting.
 * @size: Type indicator for the casting operation.
 *
 * Return: Resulting value after casting num.
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}