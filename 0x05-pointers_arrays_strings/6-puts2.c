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

while (str[n] != '\0')
n++;

for (i = 0; i < n; i += 2)
_putchar(str[i]);
_putchar('\n');
}
