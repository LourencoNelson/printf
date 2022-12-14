#include "main.h"

/**
 * print_number - prints a number
 * @ap: argument
 *
 * Return: number of arguments printed
 */
int print_number(va_list ap)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n  = va_arg(ap, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
	{
		num = n;
	}

	while (num / div > 9)
	{
		div *= 10;
	}

	while (div != 0)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}

/**
 * print_unsigned_number - prints unsigned number
 * @n: number
 *
 * Return: number of printed numbers
 */
int print_unsigned_number(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;
	num = n;

	while (num / div > 9)
		div *= 10;

	while (div != 0)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}
