#include "main.h"

/**
 * print_s - print string
 *@a: character
 *@f: flags
 * Return: strlen
 */

int print_s(va_list arg, flags *f)
{
	char *s = va_arg(arg, char *);

	if (!s)
		s = "(null)";
	return (_puts(s));
}
