#include "main.h"
/**
*puts2 - prints every other character
*@str: parameter
*Return: returns no value
*/

void puts2(char *str)
{
int i, n;

n = 0;

while (s[n] != '\0')
n++;

for (i = 0; i < n; i++)
{
i = i + 2;
_putchar(s[i]);
}
_putchar('\n');
}
