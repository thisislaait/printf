#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_binary :  the unsigned int argument is converted to binary
 *@arg: an unsigned integer
 *Return: null or the binary form of arg
 */

char *print_binary(va_list args) 
{
	char *binary;
	unsigned int num  = va_arg(args, char)

	
	*binary = malloc(sizeof(char) * (sizeof(unsigned int) * CHAR_BIT + 1)); /*assigns space in memory to store length of int + null byte*/
  if (binary == NULL) 
	{
    	return (NULL);
  	}

  while (num > 0) 
	{
    	binary[i++] = (num & 1) + '0';  /* checks if int is odd and then saves the remainder to binary*/
    	num >>= 1;
  	}
  	binary[i] = '\0';
  	return (binary);
} 
