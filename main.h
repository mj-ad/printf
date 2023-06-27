#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct flag - flags
 * @plus: for '+'
 * @space: for ' '
 * @hash: for '#'
 */

typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags;

typedef struct handle
{
	char c;
	int (*f)(va_list a, flags *f);
} hd;

int _printf(const char *format, ...);
int print_s(va_list arg, flags *f);
int print_char(va_list a, flags *f);
int _puts(char *s);
int _putchar(char c);
int (*get(char s))(va_list, flags *);
int get_flag(char s, flags *f);

#endif /* MAIN_H */
