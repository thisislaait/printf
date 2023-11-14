#ifndef MAIN_H
<<<<<<< HEAD
#define MAIN_
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>


int _printf(const char *format, ...);



#endif
=======
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_str_arg(const char *str);
int print_binary(unsigned int num);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex_lower(va_list args);
int print_hex_upper(va_list args);
int print_S(va_list args);
int print_p(va_list args);

#endif /* MAIN_H */
>>>>>>> c5667061eb4d165d609b65218fd55cf65393f18d
