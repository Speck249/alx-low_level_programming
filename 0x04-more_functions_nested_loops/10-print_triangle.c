#include "main.h"
/**
*print_triangle - function prints a triangle
*@size: parameter
*Return: returns no value
*/

void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i <= (size - 1); i++)
{
for (j = 0; j < (size - 1) - i; j++)
{
_putchar(32);
}
for (k = 0; k <= i; k++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
