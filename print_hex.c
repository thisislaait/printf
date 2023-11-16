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

    count += print_hex_recursive(num, uppercase);

    return (count);
}

/**
 * print_hex_recursive - Recursively prints hexadecimal representation of a number
 * @n: The unsigned int to be printed
 * @uppercase: 1 if the specifier is %X (uppercase), 0 if %x (lowercase)
 * Return: The number of characters printed
 */
int print_hex_recursive(unsigned int n, int uppercase)
{
    int count = 0;
    char hex_digits[] = "0123456789abcdef";

    if (n / 16 != 0)
        count += print_hex_recursive(n / 16, uppercase);

    _putchar(hex_digits[n % 16 + (uppercase ? 6 : 0)]);
    count++;

    return (count);
}