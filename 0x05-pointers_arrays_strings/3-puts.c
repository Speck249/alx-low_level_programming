#include "main.h"
/**
*_puts - prints a string, followed by a new line
*@str: parameter
*Return: no return value
*/

void _puts(char *str)
{
int i, n = 0;

if (str[n] != '\0')
{
for (i = 0; i < n; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
}
