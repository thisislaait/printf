#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>

/**
 *print_binary :  the unsigned int argument is converted to binary
 *@num: an unsigned integer
 *Return: null or the binary form of arg
 */

int print_binary(unsigned int num)
{
	char *binary;
	int i = 0;
	
	binary = malloc(sizeof(char) * (sizeof(unsigned int) * CHAR_BIT + 1)); /*assigns space in memory to store length of int + null byte*/
	if (binary == NULL) 
	{
    	return (0);
  	}
	while (num > 0) 
	{
    	binary[i++] = (num & 1) + '0';  /* checks if int is odd and then saves the remainder to binary*/
    	num >>= 1;
  	}
  	binary[i] = '\0';
	for (int j = i - 1; j>=0; j--)
	{
		_putchar(binary[j]);
	}
	free(binary);
  	return (i);
}
