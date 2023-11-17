#include "main.h"

/**
 * print_binary - Handles %b specifier (converts unsigned int to binary)
 * @args: The va_list of arguments
 * Return: The number of characters printed
 */
int print_binary(va_list args)
{   
        unsigned int num = va_arg(args, unsigned int);
        int count = 0;

        if (num == 0)
        {
            _putchar('0');
            count++;
            return (count);
        }

        count += print_binary_recursive(num);

        return (count);
}

/**
 * print_binary_recursive - Recursively prints binary representation of a number
 * @n: The unsigned int to be printed
 * Return: The number of characters printed
 */
int print_binary_recursive(unsigned int n)
{
        int count = 0;

        if (n / 2 != 0)
            count += print_binary_recursive(n / 2);

        _putchar((n % 2) + '0');
        count++;

        return (count);
}
