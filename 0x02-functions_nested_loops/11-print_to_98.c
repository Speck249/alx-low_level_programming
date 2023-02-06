#include "main.h"
#include <stdio.h>
/**
*print_to_98 - prints natural numbers from n to 98
*@n: parameter
*Return: no return value
*/

void print_to_98(int n)
{
for (; n < 99; n++)
{
printf("%d", n);
if (n < 98)
{
putchar(44);
putchar(32);
}
}

for (; n > 97; n--)
{
printf("%d", n);
if (n > 98)
{
putchar(44);
putchar(32);
}
}
}
