#include "main.h"

/**
 * get - gets format specifier
 * @s: specifier
 * Return: pointer to function
 */

int (*get(char s))(va_list, flags *)
{
	hd func[] = {
		{'i', print_int},
		{'s', print_s},
		{'c', print_char},
		{'d', print_int},
		{'u', print_ui},
		{'b', print_b},
		{'x', print_x},
		{'X', print_X},
		{'o', print_o},
		{'R', print_R},
		{'r', print_r},
		{'S', print_S},
		{'p', print_p},
		{'%', print_per}
	};
	int flag = 14;
	int i;

	for (i = 0; i < flag; i++)
	{
		if (func[i].c == s)
			return (func[i].f);
	}
	return (NULL);
}
