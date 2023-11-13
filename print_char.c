#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_char - print charachter into stdout
 * @arg: argument list
 *
 * Return: 1
 */

int print_char(va_list arg)
{
	char ch = (char)va_arg(arg, int);

	if (ch == '\0')
		return (-1);
	putchar(ch);

	return (1);
}
