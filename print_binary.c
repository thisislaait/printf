#include <stdio.h>
#include <stdarg.h>

int print_binary(unsigned int value) {
    int count = 0;
    if (value > 1) {
        count += print_binary(value / 2);
    }
    putchar(value % 2 + '0');
    return count + 1;
}
