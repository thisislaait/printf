#include "main.h"

/**
 * print_octal - Handles %o specifier
 * @args: The va_list of arguments
 * Return: The number of characters printed
 */
int print_octal(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    int count = 0;

    count += print_octal_recursive(num);

    return (count);
}

/**
 * print_octal_recursive - Recursively prints octal representation of a number
 * @n: The unsigned int to be printed
 * Return: The number of characters printed
 */
int print_octal_recursive(unsigned int n)
{
    int count = 0;

    if (n / 8 != 0)
        count += print_octal_recursive(n / 8);

    _putchar((n % 8) + '0');
    count++;

    return (count);
}