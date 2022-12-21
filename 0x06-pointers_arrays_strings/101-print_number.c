#include "main.h"
/**
*print_number - prints an integer
*@n: parameter
*Return: returns no value
*/

void print_number(int n)
{
unsigned int i = n;

if (n < 0)
{
_putchar(45);
i = i * -1;
}

if ((i / 10) > 0)
print_number(i / 10);
_putchar((i % 10) + '0');
}
