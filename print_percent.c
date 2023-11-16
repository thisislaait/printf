#include "main.h"

/**
 * print_percent - Handles %% specifier
 * @count: Pointer to the count of characters printed
 * Return: 1 if specifier is handled, 0 otherwise
 */
int print_percent(int *count)
{
	*count += _putchar('%');

	return (1);
}
