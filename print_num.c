#include "main.h"

/**
 * converter - converts num to string
 * @n: num
 * @b: base
 * @flag: for lowercase hex values
 * Return: string
 */

char *converter(unsigned long n, int b, int flag)
{
	char *r;
	char buff[50];
	char *ptr;

	r = (flag) ? "0123456789abcdef" : "0123456789ABCDEF";
	ptr = &buff[49];
	*ptr = '\0';
	while (n != 0)
	{
		*--ptr = r[n % b];
		n /= b;
	}
	return (ptr);
}

/**
 * print_int - prints integers
 * @a: integer argument
 * @f: flag pointer
 * Return: num of chars printed
 */

int print_int(va_list a, flags *f)
{
	int i = va_arg(a, int);
	int d = count(i);

	if (f->space == 1 && f->plus == 0 && i >= 0)
		d += _putchar(' ');
	if (f->plus == 1 && i >= 0)
		d += _putchar('+');
	if (i <= 0)
		d++;
	print(i);
	return (d);
}

/**
 * print_ui - prints unsigned integer
 * @a: integer argument
 * @f: flag pointer
 * Return: num of chars printed
 */

int print_ui(va_list a, flags *f)
{
	unsigned int i =  va_arg(a, unsigned int);
	char *s = converter(i, 10, 0);

	(void)f;
	return (_puts(s));
}

/**
 * print - loops through a number and prints
 * @n: number
 */

void print(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
		i = n;
	if (i / 10)
		print(i / 10);
	_putchar((i % 10) + '0');
}

/**
 * count - conuts num of digits in a number
 * @i: number
 * Return: num of digits
 */

int count(int i)
{
	unsigned int j = 0;
	unsigned int k;

	if (i < 0)
		k = i * -1;
	else
		k = i;
	for (; k != 0; j++)
	{
		k /= 10;
		j++;
	}
	return (j);
}
