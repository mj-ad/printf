#include "main.h"

/**
 * get - gets format specifier
 * @s: specifier
 * Return: pointer to function
 */

int (*get(char s))(va_list, flags *)
{
	hd func[] = {
		{'s', print_s},
		{'c', print_char},
	};
	int flag = 2;
	int i;

	for (i = 0; i < flag; i++)
	{
		if (func[i].c == s)
			return (func[i].f);
	}
	return (NULL);
}
