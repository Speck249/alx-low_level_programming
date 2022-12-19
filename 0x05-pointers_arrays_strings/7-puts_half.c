#include "main.h"
#include <string.h>
/**
*puts_half - prints half of a string
*@str: parameter
*Return: has no return value
*/

void puts_half(char *str)
{
int i, n, j;

j = strlen(str);

if (j % 2 == 1)
{
n = j - 1 / 2;
}
else
{
n = j / 2;
}

for (i = n; i < j; i++)
_putchar(str[i]);
_putchar('\n');
}
