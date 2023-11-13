#include "main.h"
#include <stdarg.h>

/**
 * print_str - Print a string
 * @args: va_list containing the string to print
 */
void print_str(va_list args)
{
    char *str = va_arg(args, char*);
    while (*str)
    {
        _putchar(*str);
        str++;
    }
}
