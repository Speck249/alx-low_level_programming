#include "main.h"
/**
*print_rev - prints a string, in reverse
*@s: parameter
*Return: no return value
*/

void print_rev(char *s)
{
int n = 0, i;

while (s[n] != '\0')
n++;

for (i = n - 1; i >= 0; i--)
{
_putchar(s[i]);
}

if (s[i] == '\0')
_putchar('\n');
}
