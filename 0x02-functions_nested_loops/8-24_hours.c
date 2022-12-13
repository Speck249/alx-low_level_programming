#include "main.h"
/**
*jack_bauer - function prints every minute of the day
*
*Return: Always 0 (Success)
*/

void jack_bauer(void)
{
int n, m;
for (n = 0; n < 24; n++)
{
for (m = 0; m < 60; m++)
{
if (n < 10)
{
_putchar(48);
_putchar(n + '0');
}
if (m < 10)
{
_putchar(58);
_putchar(48);
_putchar(m);
}
_putchar(n);
_putchar(58);
_putchar(m);
}
}
return (0);
}
