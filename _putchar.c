#include <unistd.h>

/**
 * _putchar - Writes a character/string to stdout
 * @c: Character/string to write
 * Return: Number of characters written (1) or -1 if error
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}
