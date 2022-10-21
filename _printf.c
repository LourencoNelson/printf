#include "main.h"

/**
 * _printf - prints it's arguments to the stdout
 * @format: format string
 *
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	int i, s;
	va_list ap;

	s = 0;

	va_start(ap, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			s++;
			_putchar(format[i]);
		}

		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					s += print_char(va_arg(ap, int));
					break;
				case 's':
					s += print_string(va_arg(ap, char*));
					break;
				case 'd':
					s += print_num(va_arg(ap, int));
					break;
				case 'i':
					s += print_num(va_arg(ap, int));
					break;
			}
			i++;
		}
		va_end(ap);
	}

}
