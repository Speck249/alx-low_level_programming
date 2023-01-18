#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - function returns sum of all parameters
*@n: parameter
*Return: Always 0 (Success)
*/

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;

va_list arg;

if (n == 0)
return (0);

va_start(arg, n);

for (unsigned int i = 0; i < n; i++)
{
sum += va_arg(arg, int);
}
va_endi(arg);

return (sum);
}
