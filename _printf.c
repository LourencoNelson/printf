#include "main.h"

/**
 * _printf - prints it's arguments to the stdout
 * @format: format string
 *
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	int i, j, s;
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
					s++;
					_putchar(va_arg(ap, int));
					break;
				case 's':
					char *str = va_arg(ap, char*);

					for (j = 0; str[j] != '\0'; j++)
					{
						s++;
						_putchar(str[j]);
						break;
					}
			}
			i++;
		}
		va_end(ap);
	}

}
