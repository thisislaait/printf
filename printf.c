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
				break;
			}

			if (*format == '%')
			{
				write(1,format,1);
				char_print++;
			}
			else if (*format == 'c')
			{
				char c  = va_arg(mylist, int);
				write(1, &c, 1);
				char_print++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(mylist, char*);
				int str_len = 0;

				while(str[str_len] != '\0')
				str++;


			write(1, str, str_len);
			char_print += str_len;
			}
			}
			format++;
			}
			va_end(mylist);

			return (char_print);
			}

int main()
{
_printf("Ntoko\n");
_printf("%c\n", 'g');
_printf("%s\n", "string");
_printf("%%\n",);

return (0);

}


