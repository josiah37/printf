#include <stdiio.h>
#include "main.h"
int print_int(va_list arg)
{
    int count = 0;
    int num = va_arg(arg, int);
    char buffer[50]; // Buffer to store the string representation of the integer

    sprintf(buffer, "%d", num); // Convert the integer to a string using sprintf

    char *ptr = buffer; // Pointer to iterate over the string

    while (*ptr != '\0')
    {
        putchar(*ptr);
        ptr++;
        count++;
    }

    return count;
}

