#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - print formated string into the standard console (stdout)
 * @format: format string
 *
 * Return: number of char printed or -1 incase of failure
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0;
	int count = 0;
	va_list arg;

	struct printfSpecifier specifiers [] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'%', print_modulo}
	};

	va_start(arg, format);

	if (format == NULL)
		return (-1);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			++format;
			if (*format == 'r')
			{
				putchar('%');
				putchar('r');
			}

		for (i = 0; i < (sizeof(specifiers)/(sizeof(specifiers[0]))); i++)
		{
			if (*format == specifiers[i].specifier)
			{
			 	count += specifiers[i].printer(arg);
				
			}
		
		}
		
		
		}

		else

		{
			putchar(*format);
			count++;

		}

		++format;
	}
	va_end(arg);
	return (count);
}
