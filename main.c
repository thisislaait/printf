#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;

    len = _printf("Let's try to printf a simple sentence.\n");
    printf("Length:[%d]\n", len);

    len = _printf("Character:[%c]\n", 'H');
    printf("Length:[%d]\n", len);

    len = _printf("String:[%s]\n", "I am a string !");
    printf("Length:[%d]\n", len);

    len = _printf("Percent:[%%]\n");
    printf("Length:[%d]\n", len);

    return (0);
}
