#include "main.h"
#include <stdio.h>

/**
 * print_S - print string into stdout with non-printable characters replaced
 * @arg: argument list
 *
 * Return: number of characters printed
 */
int print_hex_char(char c);
int print_special_string(va_list arg)
{
    int count = 0;
    char *str = va_arg(arg, char *);

    if (str == NULL)
        return (-1);

    while (*str != '\0')
    {
        if ((*str >= 0 && *str < 32) || *str >= 127)
        {
		putchar('\\');
		putchar('x');
		count += 2;
		count += print_hex_char(*str);
        }
        else
        {
           putchar(*str);
            count++;
        }
        str++;
    }

    return (count);
}

/**
 * print_hex_char - print hexadecimal representation of a character
 * @c: character
 *
 * Return: number of characters printed
 */
int print_hex_char(char c)
{
    int count = 0;
    char buffer[3];
    int i = 0;

    while (c != 0)
    {
        int remainder = c % 16;
        if (remainder < 10)
            buffer[i++] = '0' + remainder;
        else
            buffer[i++] = 'A' + (remainder - 10);
        c /= 16;
    }

    if (i == 1)
    {
       putchar('0');
        count++;
    }

    while (--i >= 0)
    {
        putchar(buffer[i]);
        count++;
    }

    return (count);
}

