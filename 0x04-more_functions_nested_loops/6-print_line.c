#include "main.h"
/**
*print_line - function draws a straight line in the terminal
*@n: parameter
*Return: Always 0 (Success)
*/

void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
_putchar(95);
_putchar('\n');
}
}
}
