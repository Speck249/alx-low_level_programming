#include <stdio.h>
/**
*print_to_98 - prints all natural numbers from n to 98
*@n: natural numbers
*Return: returns no value
*/

void print_to_98(int n)
{
int i;

if (n < 99)
for (i = n; i < 99; i++)
{
printf("%d", i);

if (i < 98)
{
putchar(44);
putchar(32);
}
}

else
for (i = n; i > 97; i--)
{
printf("%d", i);

if (i > 98)
{
putchar(44);
putchar(32);
}
}
}
