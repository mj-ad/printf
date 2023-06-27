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
