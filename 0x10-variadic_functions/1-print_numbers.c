#include "variadic_functions.h"
/**
*print_numbers- function prints numbers
*@separator: first parameter
*@n: second parameter
*Return: returns no value
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;

va_start(args, n);

for (unsigned int i = 0; i < n; i++)
{
printf("%d", va_arg(args, n));

if (separator && i < n - 1)
printf("%s", separator);
}

_putchar('\n');

va_end(args);
}
