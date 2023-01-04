#include "main.h"
/**
*void _puts_recursion - function prints string
*@s: parameter
*Return: no return value
*/

void _puts_recursion(char *s)
{

if (*s != '\0')
{
_putchar(*s);
s++;
_puts_recrusion(s);
}

else 
{
_putchar('\n');
return;
}
}
