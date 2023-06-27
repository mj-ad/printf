#include "main.h"
/**
 * print_b - prints binary
 * @a: binary
 * @f: flag
 * Return: binary string
 */

int print_b(va_list a, flags *f)
{
	unsigned int i = va_arg(a, unsigned int);
	char *s = converter(i, 2, 0);

	(void)f;
	return (_puts(s));
}

/**
 * print_x - print hex num
 * @a: num
 * @f: flag
 * Return: num of char printed
 */

int print_x(va_list a, flags *f)
{
	unsigned int i = va_arg(a, unsigned int);
	char *s = converter(i, 16, 1);
	int c;

	if (f->hash == 1 && s[0] != '0')
		c += _puts("0x");
	c += _puts(s);
	return (c);
}

/**
 * print_X - coverts num to hex in uppercase
 * @a: num
 * @f: flag
 * Return: num of char printed
 */

int print_X(va_list a, flags *f)
{
	unsigned int i = va_arg(a, unsigned int);
	char *s = converter(i, 16, 1);
	int c;

	if (f->hash == 1 && s[0] != '0')
		c += _puts("0X");
	c += _puts(s);
	return (c);
}

/**
 * print_o - coverts num to base 8
 * @a: num
 * @f: flag
 * Return: num of char printed
 */

int print_o(va_list a, flags *f)
{
	unsigned int i = va_arg(a, unsigned int);
	char *s = converter(i, 8, 1);
	int c;

	if (f->hash == 1 && s[0] != '0')
		c += _putchar('0');
	c += _puts(s);
	return (c);
}
