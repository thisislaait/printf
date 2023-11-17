#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @add: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef int make_iso_compilers_happy;
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
} print_handler_t;

/* Declarations for hex digit arrays */
extern const char hex_digits_uppercase[];
extern const char hex_digits_lowercase[];


/* Function prototype for handling specifiers */
int handle_format(char specifier, va_list args, int *count);

/* Function prototypes for specifier logic */
int print_char(va_list args, int *count);
int print_str(va_list args, int *count);
int print_percent(int *count);
int print_int(va_list args);
int print_number(int n);
int print_binary(va_list args);
int print_binary_recursive(unsigned int n);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args, int uppercase);
int print_octal_recursive(unsigned int n);
int print_hex_recursive(unsigned int n, int uppercase);
int print_string(va_list args);
char print_address(char *ptr);

/* Function prototype for handling NULL strings */
void handle_null(int *count);

#endif /* MAIN_H */
