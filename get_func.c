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
		{'x', print_hex},
		{'X', print_hex_big},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', print_bigS},
		{'p', print_address},
		{'%', print_percent}
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
