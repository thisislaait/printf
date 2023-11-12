#include "main.h"

int _printf(const char *format, ...)
{
	int char_print = 0;
	va_list mylist;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(mylist, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			char_print++;
		}
		else
		{
			format++;
			if (*format == '\0')
			{
				break
			}
		
