#include <stdiio.h>
#include "main.h"
int print_int(va_list arg)
{
    int count = 0;
    int num = va_arg(arg, int);
    char buffer[50];

	itoa(buffer, "%d", num);

    char *ptr = buffer;
   
	 while (*ptr != '\0')
	 {
		 putchar(*ptr);
		 ptr++;
		 count++;
	 }

	 return (count);
}

