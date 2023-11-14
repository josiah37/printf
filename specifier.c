#include "main.h"

/**
 * specifier - call appropirate fun for a given passed specifier char
 * @ch: specifier symbol (char)
 * @arg: argument passed
 * Return: number of char printed
 */

int specifier(char ch, va_list arg)
{
	int count = 0;

/**
 * struct printfSpecifier - structre that holds diffrent specifiers
 *
 */
	struct printfSpecifier  specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_modulo},
		{'d', print_int},
		{'i', print_int}
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
	case '\0':
		count = count + putchar(37);
		break;
	default:
		putchar('%');
		putchar(ch);
		count = count + 2;
	}

		return (count);
}
