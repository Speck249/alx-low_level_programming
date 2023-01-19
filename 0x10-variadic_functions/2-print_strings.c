#include "variadic_functions.h"
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
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
ptr = va_arg(args, char *);

if (ptr == NULL)
printf("(nil)");

else
printf("%s", ptr);

if (separator && i < n - 1)
printf("%s", separator);
}

printf("\n");

va_end(args);
}
