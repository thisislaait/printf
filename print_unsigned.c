#include "main.h"

/**
 * print_unsigned - Handles %u specifier
 * @args: The va_list of arguments
 * Return: The number of characters printed
 */
int print_unsigned(va_list args)
{
        unsigned int num = va_arg(args, unsigned int);
        int count = 0;
        /* Handle the case when num is 0 */
        if (num == 0)
        {
            _putchar('0');
            count++;
            return (count);
        }

        count += print_number(num);
        return (count);
}