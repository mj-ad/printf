#include "main.h"
/**
 * print_S - prints non printatable characters as \x
 * @a: char
 * @f: flag
 * Return: num of char printed
 */

int print_S(va_list a, flags *f)
{
	int i, c = 0;
	char *s;
	char *arg = va_arg(a, char *);

	(void)f;
	if (!arg)
		return (_puts("(null)"));
	for (i = 0; arg[i]; i++)
	{
		if (arg[i] > 0 && (arg[i] < 32 || arg[i] >= 127))
		{
			_puts("\\x");
			c += 2;
			s = converter(arg[i], 16, 0);
			if (!s[i])
				c += _putchar('0');
			c += _puts(s);
		}
		else
			c += _putchar(arg[i]);
	}
	return (c);
}

/**
 * print_r - prints in reverse
 * @a: string
 * @f: flags
 * Return: strlen
 */

int print_r(va_list a, flags *f)
{
	int c = 0, b;
	char *s = va_arg(a, char *);

	(void)f;
	if (!s)
		s =  "(null)";

	while (s[c])
		c++;

	for (b = c - 1; b >= 0; b--)
		_putchar(s[b]);
	return (c);
}

/**
 * print_R - print using rot13
 * @a: string
 * @f: flags
 * Return: strlen
 */

int print_R(va_list a, flags *f)
{
	int i, j;
	char *d = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *D = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(a, char *);

	(void)f;
	for (i = 0; s[i]; i++)
	{
		if (s[i] < 'A' || (s[i] > 'Z' && s[i] < 'a') || s[i] > 'z')
			_putchar(s[i]);
		else
		{
			for (j = 0; j <= 52; j++)
			{
				if (s[i] == d[j])
					_putchar(D[j]);
			}
		}
	}
	return (i);
}

/**
 * print_per - print %
 * @a: list args
 * @f: flags
 * Return: num of char, 1
 */

int print_per(va_list a, flags *f)
{
	(void)a;
	(void)f;
	return (_putchar('%'));
}
