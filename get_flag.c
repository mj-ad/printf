#include "main.h"

/**
 * get_flag - checks if a flag is selected
 * @s: flag specifier
 * @f: pointer to flag struct
 * Return: 1 if flag
 */

int get_flag(char s, flags *f)
{
	int i = 0;

	switch (s)
	{
	case '+':
		f->plus = 1;
		i = 1;
		break;
	case ' ':
		f->space = 1;
		i = 1;
		break;
	case '#':
		f->hash = 1;
		i = 1;
		break;
	}
	return (i);
}
