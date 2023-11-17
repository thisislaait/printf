#include "main.h"
#include <stdio.h>

/**
 * print_string - Handles %S specifier
 * @args: The va_list of arguments
 * Return: The number of characters printed
 */
int print_string(va_list args)
{
    char *str = va_arg(args, char *);
    int count = 0;

    if (str == NULL)
    {
        handle_null(&count);
        return (count);
    }

    while (*str)
    {
        if (*str < 32 || *str >= 127)
        {
            count += _putchar('\\');
            count += _putchar('x');
            count += print_hex_recursive(*str, 1); /* Print ASCII code in hexadecimal (uppercase)*/
        }
        else
        {
            count += _putchar(*str);
        }

        str++;
    }

    return (count);
}