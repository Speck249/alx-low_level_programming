#include "main.h"
/**
*print_diagonal - function draws a diagonal line in the terminal
*@n: parameter
*Return: returns no value
*/

void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i < n; i++)
{
for (j = 1; j <= n; j++)
{
_putchar(32);
}
_putchar(92);

if (i < (n - 1))
_putchar('\n');
}
_putchar('\n');
}
}
