#include "main.h"

/**
 * print_modulo - print & into stdout
 *
 * Return: 1
 */

int print_modulo(va_list arg)
{
	int ch = va_arg(arg, int);

	ch = 37;

	putchar(ch);

	return (1);
}
