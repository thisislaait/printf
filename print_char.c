#include "main.h"
#include <stdarg.h>

/**
 * print_char - Print a character
 * @args: va_list containing the character to print
 */
void print_char(va_list args)
{
    char c = va_arg(args, int);
    _putchar(c);
}
