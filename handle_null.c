#include "main.h"

/**
 * handle_null - Handles NULL strings
 * @count: Pointer to the count of characters printed
 */
void handle_null(int *count)
{
    char *null_str = "(null)";
    while (*null_str)
    {
        *count += _putchar(*null_str);
        null_str++;
    }
}
