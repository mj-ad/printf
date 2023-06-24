#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: format specifiers
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int (*func)(va_list, flags *);
	flags f = {0, 0, 0};
	int len = 0;

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
			while (get_flag(*format, &flag))
				format++;
			func = get_func(*p);
			len += (func) ? func(args, &flag) : _printf("%%%c", *p);
		}
		else
			len += _putchar(*format);
	}
	_putchar(-1);
	va_end(args);
	return (len);
}
