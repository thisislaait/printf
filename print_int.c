#include "main.h"

/**
 * print_int - Handles %d and %i specifiers
 * @args: The va_list of arguments
 * Return: The number of characters printed
 */
int print_int(va_list args)
{
    int num = va_arg(args, int);
    int count = 0;

    /* Handle negative numbers */
    if (num < 0)
    {
        _putchar('-');
        count++;
        num = -num;
    }

    /* Print the number */
    count += print_number(num);

    return (count);
}