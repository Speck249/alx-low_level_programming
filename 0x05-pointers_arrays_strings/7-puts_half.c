#include "main.h"
#include <string.h>
/**
*puts_half - prints half of a string
*@str: parameter
*Return: has no return value
*/

void puts_half(char *str)
{
int i, n = 0, j = 0;

n = strlen(str);
j = (n / 2) + 1;

if (n % 2 != 0)
{
for (i = j - 1; i < n; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
}
