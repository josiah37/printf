#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

struct printfSpecifier
{
	char specifier;
	int(*printer)(va_list arg);
};

int _printf(const char *format, ...);
int print_string(va_list arg);
int print_char(va_list arg);
int print_modulo();
int print_int(va_list arg);
int print_binary(va_list arg);

#endif
