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
		return (-1);

	while (format != NULL && *format != '\0')
	{
		if (*format == '%')
		{

			count = count + specifier(*(++format), arg);
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
