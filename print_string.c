#include "main.h"
#include <stdio.h>

/**
 * print_string - print string into stdout
 * @arg: argument list
 *
 * Return: number of char
 */

int print_string(va_list arg)
{
	int count = 0;
	char *str = va_arg(arg, char *);

	if (str == NULL || *str == '\0')
		return (count);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}
