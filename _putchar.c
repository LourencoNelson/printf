#include <unistd.h>

/**
 * _putchar - writes a character to the stdout
 * @c: character argument
 *
 * Return: character written or EOF on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
