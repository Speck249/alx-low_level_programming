#include "main.h"
#include <stdio.h>
/**
*print_to_98 - prints natural numbers from n to 98
*@n: parameter
*Return: no return value
*/

void print_to_98(int n)
{
if (n < 98)
{
for (; n < 98; n++)
printf("%d, ", n);
printf("%d\n", n);
}

else
{
for (; n > 97; n--)
printf("%d, ", n);
printf("%d\n", n);
}
}
