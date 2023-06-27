#include "main.h"
/**
 * print_p - prints address
 * @a: arg list
 * @f: flags
 * Return: num of char printed
 */

int print_p(va_list a, flags *f)
{
	char *s;
	unsigned long int p = va_arg(a, unsigned long int);
	int c = 0;

	(void)f;
	if (!p)
		return (_puts("(nil)"));
	s = converter(p, 16, 1);
	c += _puts("0x");
	c += _puts(s);
	return (c);
}
