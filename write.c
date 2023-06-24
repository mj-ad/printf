#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a char to stdout
 * @c: character
 * Return: 1
 */

int _putchar(char c)
{
	static char buff[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buff, i);
		i = 0;
	}
	if (c != -1)
	{
		buff[i] = c;
		i++;
	}
	return (1);
}

/**
 * _puts - prints a string to stdout
 * @s: string
 * Return: strlen
 */

int _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
