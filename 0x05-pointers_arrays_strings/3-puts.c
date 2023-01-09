#include "main.h"
/**
*_puts - prints a string, followed by a new line
*@str: parameter
*Return: no return value
*/

void _puts(char *str)
{
int n = 0, i;

for (i = 0; i < n; i++)
{
_putchar(str[i]);
}

if (str[n] == '\0')
_putchar('\n');
}
