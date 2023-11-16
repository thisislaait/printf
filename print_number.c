#include "main.h"

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

    /* Recursively print digits */
    if (n / 10 != 0)
        count += print_number(n / 10);

    _putchar(n % 10 + '0');
    count++;

    return (count);
}