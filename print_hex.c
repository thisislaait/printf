#include "main.h"

/**
 * print_hex - Handles %x and %X specifiers
 * @args: The va_list of arguments
 * @uppercase: 1 if the specifier is %X (uppercase), 0 if %x (lowercase)
 * Return: The number of characters printed
 */
int print_hex(va_list args, int uppercase)
{
    unsigned int num = va_arg(args, unsigned int);
    int count = 0;
    /* Handle the case when num is 0 */
    if (num == 0)
    {
        _putchar('0');
        count++;
        return count;
    }

    count += print_hex_recursive(num, uppercase);

    return (count);
}

/**
 * print_hex_recursive - Recursively prints hexadecimal representation of a number
 * @n: The unsigned int to be printed
 * @uppercase: 1 if the specifier is %X (uppercase), 0 if %x (lowercase)
 * Return: The number of characters printed
 */
/* Definitions and initializations for hex digit arrays */
const char hex_digits_uppercase[] = "0123456789ABCDEF";
const char hex_digits_lowercase[] = "0123456789abcdef";

int print_hex_recursive(unsigned int n, int uppercase)
{
    int count = 0;
    
    /* Recursively print digits */
    if (n / 16 != 0)
        count += print_hex_recursive(n / 16, uppercase);

    /* Print the current digit */
    if (uppercase)
        _putchar(hex_digits_uppercase[n % 16]);
    else
        _putchar(hex_digits_lowercase[n % 16]);

    count++;

    return (count);
}