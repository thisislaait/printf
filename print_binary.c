#include <limits.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

char *print_binary(unsigned int n) 
{
  char *binary = malloc(sizeof(char) * (sizeof(unsigned int) * CHAR_BIT + 1));
  unsigned int i;

  if (binary == NULL) 
  {
    return NULL;
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
