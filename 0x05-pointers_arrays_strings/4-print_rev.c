#include "main.h"
/**
*print_rev - prints a string, in reverse
*@s: parameter
*Return: no return value
*/

void print_rev(char *s)
{
int i, n = 0;

while (s[n] != '\0')
{
for (i = n - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
n++;
}
}
