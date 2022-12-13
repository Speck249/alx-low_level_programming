#include "main.h"
/**
*times_table - function prints the 9 times table, starting with 0
*
*Return: Always 0 (Success)
*/

void times_table(void)
{
int i, j, n;

for (i = 0; i <= 9; i++)
{
_putchar(48);
for (j = 1; j <= 9; j++)
{
n = i * j;
_putchar(44);
_putchar(32);
if (n <= 9)
{
_putchar(32);
_putchar(n + 48);
}
else
{
_putchar((n / 10) + 48);
_putchar((n % 10) + 48);
}
}
_putchar('\n');
}
}
