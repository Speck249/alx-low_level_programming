#include "main.h"
/**
*_puts - prints a string, followed by a new line
*@str: parameter
*Return: no return value
*/

void print_rev(char *s)
{
int i;

while (str[i] != '\0')
{
_putchar(str[i]);
i--;
}

if (str[i] == '\0')
_putchar('\n');
}
