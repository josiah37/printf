#include <stdiio.h>
#include "main.h"
int print_int(va_list arg)
{
       char *num  = va_arg(arg, int *);

        if (num == NULL || *num == '\0')
                return (count);

        while (*num != '\0')
        {
                putchar(*num);
                num++;
                count++;
        }

        return (count);
}
