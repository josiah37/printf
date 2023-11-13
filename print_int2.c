#include <stdarg.h>
#include <stdio.h>

/**
 * print_int - prints an integer
 * @arg: argument list
 *
 * Return: count, the  number of characters printed
 */
int print_int(va_list arg)
{
	 int count = 0;
	 int num = va_arg(arg, int);
	 char buffer[50];
	 int i = 0;

	if (num < 0)
	{
		 putchar('-');
		 count++;
		 num = -num;
	}

	while (num != 0)
	{
		buffer[i++] = '0' + num % 10;
		num /= 10;
	}

	while (--i >= 0)
	{
		putchar(buffer[i]);
		count++;
	}

	return (count);
}

