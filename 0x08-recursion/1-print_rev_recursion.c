#include "main.h"
/**
*_print_rev_recursion - function prints string in reverse
*@s: parameter
*Return: no return value
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;

else
s++;
_print_rev_recrusion(s);
s--;
_putchar(*s);
}
