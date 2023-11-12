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
	int ch = va_arg(arg, int);
	putchar(ch);

	return (1);
}
