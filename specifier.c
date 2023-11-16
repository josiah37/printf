#include "main.h"

/**
 * specifier - call appropriate function for a given passed specifier char
 * @ch: specifier symbol (char)
 * @arg: argument passed
 *
 * Return: number of char printed
 */


int specifier(char ch, va_list arg)
{
	int count = 0;

	struct printfSpecifier  specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_modulo},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
		{'S', print_special_string},
		{'x', print_hex},
	/*	{'o', print_octal},*/
	};

	switch (ch)
	{

	case 'c':
		count = count + specifiers[0].printer(arg);
		break;
	case 's':
		count = count + specifiers[1].printer(arg);
		break;
	case '%':
		count = count + specifiers[2].printer(arg);
		break;
	case 'd':
	case 'i':
		count = count + specifiers[3].printer(arg);
		break;
	case 'b':
		count = count + specifiers[5].printer(arg);
		break;
	case 'S':
		count = count + specifiers[6].printer(arg);
		break;	

	case 'x':
		count = count + specifiers[7].printer(arg);
		break;

/*
	case 'o':
		count = count + specifiers[8].printer(arg);
		break;
*/
	default:
		putchar('%');
		putchar(ch);
		count = count + 2;
	}

		return (count);

}
