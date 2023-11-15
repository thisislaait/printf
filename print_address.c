#include <stdio.h>
#include "main.h"
#include <stdlib.h>

char print_address(char *ptr)
{
	char *pointer;

	pointer = &ptr[0];
	puts(pointer);
	return (*ptr);
}
