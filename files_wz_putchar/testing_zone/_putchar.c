#include "main.h"
#include <stdio.h>


/**
 * _putchar - print a charachter into the standard output (stdout)
 * @c: charachter to be print
 *
 * Return: nothing;
 */

int _putchar(char c)
{

	putchar(c);
	return(write(1, &c, 1));
}
