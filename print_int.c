#include "main.h"

/**
 * print_int - Print an integer
 * @n: The integer to be printed
 *
 * Return: Number of characters printed
 */
int print_int(int n)
{
    int count = 0;

    /* Handle negative numbers */
    if (n < 0)
    {
        count += _putchar('-');
        n = -n;
    }

    /* Handle single-digit numbers */
    if (n < 10)
    {
        count += _putchar(n + '0');
    }
    else
    {
        /* Recursively print each digit */
        count += print_int(n / 10);
        count += _putchar(n % 10 + '0');
    }

    return count;
}
