#include "main.h"
#include <stdarg.h>

/**
 * print_percent - Print a percent sign
 * @args: Argument list (unused)
 *
 * Return: Always returns 1 (for the percent sign)
 */
int print_percent(va_list args)
{
	(void)args; /* Unused parameter */
	return _putchar('%');
}
