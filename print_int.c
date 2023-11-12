#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_int - Print an integer
 * @args: va_list containing the integer to print
 */

void print_int(va_list args)
{
    int num = va_arg(args, int);
    printf("%d", num);
}
