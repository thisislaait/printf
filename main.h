#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @add: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int add;
	int space;
	int hash;
} flags_t;

/**
 * struct stdHandler - chooses the right function depending
 * on the specifier passed to _printf()
 * @s: specifier
 * @ptr: pointer to the correct printing function
 */

typedef struct printHandler
{
	char s;
	int (*ptr)(va_list args, flags_t *ptr);
} sh;


char print_char(char character);
int print_str(const char *str);
char print_percent(void);
int print_int(int n);
int handle_format(char specifier, va_list args, int *count);
char *print_binary(unsigned int num);

#endif /* MAIN_H */
