#include "main.h"


/**
 * _putchar - print a charachter into the standard output (stdout)
 * @c: charachter to be print
 *
 * Return: nothing;
 */

int _putchar(char c)
{

	return(write(1, &c, 1));
}
