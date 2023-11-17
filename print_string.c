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
            count += print_non_printable(*str);
        }
        else
        {
            count += _putchar(*str);
        }

        str++;
    }
    return (count);
}

/**
 * print_non_printable - Prints non-printable character in hexadecimal format
 * @ch: The character to be printed
 * Return: The number of characters printed
 */
int print_non_printable(char ch)
{
    int count = 0;
    count += _putchar('\\');
    count += _putchar('x');
    if (ch < 16)
        count += _putchar('0');
    count += print_hex_recursive(ch, 1); /* Print ASCII code in hexadecimal (uppercase) */
    return (count);
}