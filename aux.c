#include "main.h"

/**
 * print_char - writes char to the stdout
 * @c: character argument
 *
 * Return: printed char (on Success)
 */

int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - writes a string to the stdout
 * @s: string argument
 *
 * Return: number of printed characters
 */

int print_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		print_char(s[i]);
	}
	return (i);
}

/**
 * print_num - writes a number to the stdout
 * @n: number argument
 *
 * Return: length of the printed number
 */

int print_num(int n)
{
	int len;
	int div;
	unsigned int num;

	len = 0;
	div = 1;

	if (n < 0)
	{
		len += print_char('-');
		num = (unsigned int) n * -1;
	}
	else
	{
		num = (unsigned int) n;
	}

	while (num / div > 9)
	{
		div *= 10;
	}

	while (div != 0)
	{
		len += print_char('0' + num / div);
		num  %= div;
		div /= 10;
	}

	return (len);

}
