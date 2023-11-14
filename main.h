#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);

char print_char(char character);
int print_str(const char *str);
char print_percent(void);
int print_int(int n);
int handle_format(char specifier, va_list args, int *count);


#endif /* MAIN_H */
