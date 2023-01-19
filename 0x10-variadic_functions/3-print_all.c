#include "variadic_functions.h"
/**
*print_all - function prints anything
*@format: first parameter
*Return: returns no value
*/

void print_all(const char * const format, ...)
{
va_list args;
unsigned int m = 0, n, p = 0;
char *ptr;
const char t_arg[] = "cifs";

va_start(args, format);
while (format && format[m])
{
n = 0;
while (t_arg[n])
{
if (format[m] == t_arg[n] && p)
{
printf(", ");
break;
} n++;
}
switch (format[m])
{
case 'c':
printf("%c", va_arg(args, int)), p = 1;
break;
case 'i':
printf("%d", va_arg(args, int)), p = 1;
break;
case 'f':
printf("%f", va_arg(args, double)), p = 1;
break;
case 's':
ptr = va_arg(args, char *), p = 1;
if (!ptr)
{
printf("(nil)");
break;
}
printf("%s", ptr);
break;
} m++;
}
printf("\n"), va_end(args);
}
