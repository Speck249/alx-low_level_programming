#include "main.h"
/**
*print_rev - prints a string, in reverse
*@s: parameter
*Return: no return value
*/

void print_rev(char *s)
{
char str = s;
int i;

while (str[i] != '\0')
{
_putchar(str[i]);
i--;
}

if (str[i] == '\0')
_putchar('\n');
}
