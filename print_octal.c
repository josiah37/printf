#include "main.h"
/**
 * print_octal- handling %o
 * @arg: arguments passed to func
 * Return: count
 */


int print_octal(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	char str[32];
	int j, i = 0;
	int count = 0;

	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
	}

	else
	{
		while (num != 0)
		{
			str[i++] = '0' + (num % 8);
			num /= 8;
		}
		str[i] = '\0';
	}

	for (j = i - 1; j >= 0; j--)
	{
		putchar(str[j]);
		count++;
	}

	return (count);
}
