#include "main.h"
/**
*print_rev - prints a string, in reverse
*@s: parameter
*Return: no return value
*/

void print_rev(char *s)
{
int i, n = 0;
i = s[n];

while (i >= 0)
{
if (s[i] == '\0')
{
_putchar('\n');
break;
}

else if (s[i] != '\0')
{
_putchar(s[i]);
}
i--;
n++;
}
}
