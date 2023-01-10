#include "main.h"
/**
*_puts - prints a string, followed by a new line
*@str: parameter
*Return: no return value
*/

void _puts(char *str)
{
int n = 0, i;

while (i < str[n])
{
if (str[i] != '\0')
_putchar(s[i]);
i++;
n++;
}

else
_putchar('\n');
}
