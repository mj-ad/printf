#include "main.h"

/**
 * print_char - prints character
 * @a: character
 * @f: flags
 * Return: num of char printed
 */

int print_char(va_list a, flags *f)
{
	(void)f;
	_putchar(va_arg(a, int));
	return (1);
}
