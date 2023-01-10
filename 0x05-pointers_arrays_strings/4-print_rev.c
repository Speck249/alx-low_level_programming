#include "main.h"
/**
*print_rev - prints a string, in reverse
*@s: parameter
*Return: no return value
*/

void print_rev(char *s)
{
int i, n = 0;

while (i >= 0)
{
if (s[i] == '\0')
{
_putchar('\n');
break;
}

else if (s[i] != '\0')
{
for (i = s[n]; i >=0; i--;)
{
_putchar(s[i]);
}
n++;
}
i++;
}
}
