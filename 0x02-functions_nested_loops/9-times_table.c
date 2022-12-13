#include "main.h"
/**
*times_table -  function that prints the 9 times table, starting with 0
*
*Return: Always 0 (Success)
*/

void times_table(void)
{
int i, j, n;

for (i = 0; i < 10; i++)
{
_putchar(48);

for (j = 1; j < 10; j++)
{
n = i * j;
_putchar(',');
_putchar(' ');
if (n <= 9)
{
_putchar(' ');
_putchar(n + ' ');
}
else
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
}
_putchar('\n');
}
}
