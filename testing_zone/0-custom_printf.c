#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf - print formated string into the standard console (stdout)
 *@format: format string
 * Return: number of char printed or -1 incase of failure
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list arg;

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'c')
			{
			putchar(*format);
			count++;
			}

			else if (*format == 's')
			{
				putchar(*format);
				count++;
			}

			else if (*format == '%')
			{
				putchar(*format);
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(arg);
	return (count);
}
