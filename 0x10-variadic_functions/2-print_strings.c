#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_strings - function prints strings
*@separator: first parameter
*@n: second parameter
*Return: no return value
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
char *ptr;

va_start(args, n);

for (unsigned int i = 0; i < n; i++)
{
ptr = va_arg(args, char *);

if (ptr == NULL)
printf("(nil)");

else
printf("%s", ptr);

if (i < n - 1 && separator != NULL)
printf("%s", separator);
}

_putchar('\n');

va_end(args);
}
