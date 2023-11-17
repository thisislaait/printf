#include "main.h"
#include <stdint.h>
#include <stdio.h>

/**
 * print_pointer - Handles %p specifier
 * @args: The va_list of arguments
 * Return: The number of characters printed
 */
int print_pointer(va_list args)
{
    void *ptr = va_arg(args, void *);
    int count = 0;

    count += _putchar('0');
    count += _putchar('x');

    if (ptr == NULL)
    {
        count += _putchar('0');
        return (count);
    }

    count += print_hex_recursive((uintptr_t)ptr, 1);

    return (count);
}