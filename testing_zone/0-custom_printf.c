#include <stdarg.h>
#include <string.h>
#include <unistd.h>
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
	int result = 0;
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
			
			 _putchar((char)va_arg(arg, int));
			count = count + result;

			}

			else if (*format == 's')
			{
			  print_string(va_arg(arg, char *));
			  count = count + result;
			}

			else if (*format == '%')
			{
			
			_putchar((char)va_arg(arg, int ));
			count = count + result;

			}
		}

		format++;
	}

	va_end(arg);
	return (count);
}
