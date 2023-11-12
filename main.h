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
void print_char(va_list args);
void print_str(va_list args);
void print_percent(va_list args);
void print_int(va_list args);

#endif /* MAIN_H */
>>>>>>> c5667061eb4d165d609b65218fd55cf65393f18d
