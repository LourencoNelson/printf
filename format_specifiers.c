#include "main.h"

/**
 * print_char - prints chars
 * @ap: argument
 *
 * Return: number of printed chars
 */
int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}

/**
 * print_string - prints strings
 * @ap: argument
 *
 * Return: number of printed chars
 */
int print_string(va_list ap)
{
	int i;
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_percent - prints a percent symbol
 * @ap: argument
 *
 * Return: number of printed chars
 */
int print_percent(__attribute__((unused))va_list ap)
{
	_putchar('%');
	return (1);
}

/**
 * print_integer - prints integer
 * @ap: argument
 *
 * Return: number of printed chars
 */
int print_integer(va_list ap)
{
	int num_length;

	num_length = print_number(ap);
	return (num_length);
}

/**
 * unsigned_integer - prints unsigned int
 * @ap: argument
 *
 * Return: count of numbers
 */
int unsigned_integer(va_list ap)
{
	unsigned int num;

	num = va_arg(ap, unsigned int);

	if (num == 0)
		return (print_unsigned_number(num));
	if (num < 1)
		return (-1);
	return (print_unsigned_number(num));
}

