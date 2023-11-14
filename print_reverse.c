#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/*
 * print_reverse - prints a string in reverse
 * @str: A string 
 * Return: 0
 */

int print_reverse(char *str)
{
  
	int i = 0;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	for (i = (count - 1); i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (count);
}
