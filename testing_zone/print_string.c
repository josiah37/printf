#include "main.h"

/**
 * print_string - print string into the standard output  (stdout)
 * @str: string to be printed
 *
 * Return: nothing
 */

int print_string(char *str)
{
	if (str == NULL)
		return (-1);

	return(write(1, &str, strlen(str)));
	
}
