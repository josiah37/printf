#include "main.h"
#include <stdio.h>

int print_binary(va_list arg)
{
    int count = 0;
    unsigned int num = va_arg(arg, unsigned int);
    unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);

    if (num == 0)
    {
        putchar('0');
        return 1;
    }

    while (mask > 0)
    {
        if (num & mask)
        {
            putchar('1');
            count++;
        }
        else
        {
            putchar('0');
            count++;
        }
        mask >>= 1;
    }

    return count;
}
