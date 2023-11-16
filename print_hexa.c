#include "main.h"
#include <stdio.h>

/**
 * print_hex - print hexadecimal number into stdout
 * @arg: argument list
 *
 * Return: number of characters printed
 */
int print_hex(va_list arg)
{
    int count = 0;
    unsigned int num = va_arg(arg, unsigned int);
    char buffer[50];
    int i = 0;

    if (num == 0)
    {
        putchar('0');
        return (1);
    }

    while (num != 0)
    {
        int remainder = num % 16;
        if (remainder < 10)
            buffer[i++] = '0' + remainder;
        else
            buffer[i++] = 'a' + (remainder - 10);
        num /= 16;
    }

    while (--i >= 0)
    {
        putchar(buffer[i]);
        count++;
    }

    return (count);
}

