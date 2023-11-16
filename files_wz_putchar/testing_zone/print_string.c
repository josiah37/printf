#include "main.h"
#include <stdio.h>

/**
 * print_string - print string into stdout
 * @str: string pointe
 *
 * Return: number of chat
 */

int print_string(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		putchar(*str);
		str++;
		count++;
	}

	return (count);
}
