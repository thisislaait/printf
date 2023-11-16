#include "main.h"
#include <stdarg.h>

/**
 * print_str - Handles %s specifier
 * @args: The va_list of arguments
 * @count: Pointer to the count of characters printed
 * Return: 1 if specifier is handled, 0 otherwise
 */
int print_str(va_list args, int *count)
{
    char *str = va_arg(args, char *);
    if (str == NULL)
    {
        handle_null(count);
    }
    else
    {
        while (*str)
        {
            *count += _putchar(*str);
            str++;
        }
    }
    return (1);
}

