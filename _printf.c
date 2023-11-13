#include "main.h"
#include <stdarg.h>

/**
 * _printf - Custom printf function
 * @format: Format specifier
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == '\0')
                break;
            switch (*format)
            {
            case 'c':
                print_char(args);
                break;
            case 's':
                print_str(args);
                break;
            case '%':
                print_percent(args);
                break;
            case 'd':
            case 'i':
                print_int(args);
                break;
            default:
                _putchar('%');
                _putchar(*format);
                count += 2;
                break;
            }
        }
        else
        {
            _putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);
    return count;
}

