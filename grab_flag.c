#include "main.h"

/**
 * grab_flag - turns on flags if _printf finds
 * a flag modifier in the format string
 * @s: character that holds the flag specifier
 * @ptr: pointer to the struct flags in which we check verify their state
 *
 * Return: 1 || 0
 */
int get_flag(char s, flags_t *ptr)
{
	int i = 0;

	switch (s)
	{
		case '+':
			ptr->add = 1;
			i = 1;
			break;
		case ' ':
			ptr->space = 1;
			i = 1;
			break;
		case '#':
			ptr->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
