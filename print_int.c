#include "main.h"
#include <limits.h>

/**
 * print_number - Prints an integer (helper function for print_int)
 * @n: The integer to be printed
 * Return: The number of characters printed
 */
int print_number(int n)
{
    int count = 0;

    /* Handle the case when n is 0 */
    if (n == 0)
    {
        _putchar('0');
        count++;
        return (count);
    }

    /* Handle the case when n is INT_MIN */
    if (n == INT_MIN)
    {
        count += print_number(n / 10); /* Print the rest of the digits recursively */
        _putchar('8'); /* Print the last digit of INT_MIN (8) separately */
        count++;
        return (count);
    }

    /* Handle other cases */
    if (n < 0)
    {
        _putchar('-');
        count++;
        n = -n;
    }

    /* Recursively print digits */
    if (n / 10 != 0)
        count += print_number(n / 10);

    _putchar(n % 10 + '0');
    count++;

    return (count);
}