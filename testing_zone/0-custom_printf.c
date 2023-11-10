#include <stdarg.h>
#include <strlen.h>
#include "main.h"

/**
 * _printf - print formated string into the standard console (stdout)
 * @format: format string 
 *
 * Return: number of char printed or -1 incase of failure
 */

int _printf(const char *format, ...)
{
	return (strlen(format));
}
