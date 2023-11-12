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
	int count = 0;
	va_list arg;

	va_start(arg, format);

	if (format == NULL)
		return (0);
	if (*format == '%' && (*++format == '\0'))
		return (-1);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			++format;

			if (*format == 'c')
			{
				count = count + print_char(arg);
			}
			else if (*format == 's')
			{
				count = count + print_string(arg);
			}
			else if  (*format == '%')
			{
				count = count + print_modulo();
			}
			else if (*format == 'r')
			{
				count = count + print_modulo();
				putchar(*format);
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
