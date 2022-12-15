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
for (i = 0; i <= size; i++)
{
for (j = i; j <= size; j++)
{
_putchar(32);
}
for (k = 0; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
