#include "main.h"
/**
*print_number - prints an integer
*@n: parameter
*Return: returns no value
*/

void print_number(int n)
{
unsigned int j, k, i = n;

if (n < 0)
{
_putchar('-');
i = n * -1;
}
else
{
i = n;
}

j = i;
k = 1;

while (j > 9)
{
j = j / 10;
k = k * 10;
}

for (; k >= 1; k = k / 10)
{
_putchar(((i / k) % 10) + '0');
}
}
