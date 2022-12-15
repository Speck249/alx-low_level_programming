#include "main.h"
/**
*print_triangle - function prints a triangle
*@size: parameter
*Return: Always 0 (Success)
*/

void print_triangle(int size)
{
int i, j, k;
for (i = 0; i <= size; i++)
{
for (j = i; j <= size; j++)
{
_putchar(32);
}
for (k = i; k < i; k++)
{
_putchar(35);
}
_putchar('\n');
}
}
