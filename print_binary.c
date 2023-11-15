#include <limits.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
  * print_binary - a function to convert unsigned
  * integers to binary
  * @n: an unsigned int
  * Return: 0 or a binary
  */

char *print_binary(unsigned int n)
{
	char *binary;
	unsigned int i;

	*binary = malloc(sizeof(char) * (sizeof(unsigned int) * CHAR_BIT + 1));

	if (binary == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (n > 0)
	{
	binary[i++] = (n & 1) + '0';
	n >>= 1;
	}

	binary[i] = '\0';
	puts(binary);

	return (binary);
}
