#include <stdarg.h>
#include <strlen.h>
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
	if (format == NULL)
		return (-1);

	while (*format != '\0')

	{
		if (*format == '%')
		{
			format++;

			if (*format == 'c')
			{ 
				
			}

			else if (*format == 's')
			{
			}

			else if (*format == '%')
			{
			}
		}





	return (strlen(format));
}
