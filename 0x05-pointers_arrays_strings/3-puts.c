#include "main.h"
/**
*_puts - prints a string, followed by a new line
*@str: parameter
*Return: no return value
*/

void _puts(char *str)
{
int n = 0, m = 0, i;

while ((*(str + m)) != '\0')
{
for (i = 0; i < str[n]; i++)
{
_putchar(str[i]);
}

if ((*(str + m)) == '\0')
{
_putchar('\n');
}
m++;
n++;
}
}
