#include "main.h"
#include <limits.h>

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
        /* Avoid overflow when negating INT_MIN */
        if (num == INT_MIN)
        {
            count += print_number(-(num + 1)); /* Negate (num + 1) to avoid overflow */
            _putchar('8'); /* Print the last digit of INT_MIN (8) separately */
            count++;
            return (count);
        }
        else
        {
            num = -num;
        }
    }

    /* Print the number */
    count += print_number(num);

    return (count);
}