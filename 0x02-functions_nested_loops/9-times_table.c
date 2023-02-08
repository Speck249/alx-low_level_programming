#include "main.h"
/**
*times_table - prints 9 x 9 table
*Return: returns no value 
*/

void times_table(void)
{
int i, j, mul;

for (i = 0; i < 10; i++)
{
_putchar(48);

for (j = 1; j < 10; j++)
{
mul = i * j;
_putchar(44);
_putchar(32);

if (mul < 10)
{
_putchar(32);
_putchar(mul + 48);
}

else
{
_putchar((mul / 10) + 48);
_putchar((mul % 10) + 48);
}
}
_putchar('\n');
}
}
