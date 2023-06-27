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
char *converter(unsigned long n, int b, int flag);
int print_int(va_list a, flags *f);
int print_ui(va_list a, flags *f);
void print(int n);
int count(int i);
int print_b(va_list a, flags *f);
int print_x(va_list a, flags *f);
int print_X(va_list a, flags *f);
int print_o(va_list a, flags *f);
int print_S(va_list a, flags *f);
int print_r(va_list a, flags *f);
int print_R(va_list a, flags *f);
int print_per(va_list a, flags *f);
int print_p(va_list a, flags *f);

#endif /* MAIN_H */
