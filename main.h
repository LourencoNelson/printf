#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct convert - defines a structure for symbols and functions
 *
 * @sym: operator
 * @f: function associated
 */
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int parser(const char *format, conver_t f_list[], va_list ap);
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);
int print_integer(va_list ap);
int print_number(va_list ap);
int print_binary(va_list ap);
int print_reversed(va_list ap);
int rot13(va_list ap);
int rot13(va_list ap);
int unsigned_integer(va_list ap);
int print_octal(va_list ap);
int print_hex(va_list ap);
int print_heX(va_list ap);

unsigned int base_len(unsigned int num, int base);
char *rev_string(char *s);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsigned_number(unsigned int n);

#endif
