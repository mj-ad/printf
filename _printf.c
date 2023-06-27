#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: format specifiers
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;
	int (*func)(va_list, flags *);
	flags f = {0, 0, 0};

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (; *format; format++)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				len += _putchar('%');
				continue;
			}
			while (get_flag(*format, &f))
				format++;
			func = get(*format);
			len += (func) ? func(args, &f)
				: _printf("%%%c", *format);
		}
		else
			len += _putchar(*format);
	}
	_putchar(-1);
	va_end(args);
	return (len);
}
