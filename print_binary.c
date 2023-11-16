/**
 * print_binary - takes numbers and gives their biinay
 * @arg: argumnts passed
 * Return: returning the count to main
 */
#include "main.h"
#include <stdio.h>

int print_binary(va_list arg)
{
	int count = 0;
	unsigned int num = va_arg(arg, unsigned int);
	unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);

	int leading_zeros = 1;/*  Flag variable to track leading zeros*/

	if (num == 0)
	{
		putchar('0');
		return (1);
	}

	while (mask > 0)
	{

		if (num & mask)
		{
			putchar('1');
			count++;
			leading_zeros = 0; /* Leading zero encountered, set flag to 0*/
		}

		else if (!leading_zeros) /*  Skip leading zerios */
		{
			putchar('0');
			count++;
		}

		mask >>= 1;
	}

	return (count);
}
