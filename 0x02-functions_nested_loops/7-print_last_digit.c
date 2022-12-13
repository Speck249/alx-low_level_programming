#include "main.h"
/**
*print_last_digit - function prints the last digit of a number
*
*@n: integer value
*
*Return: Always 0 (Success)
*/

int print_last_digit(int n)
{
int x;
x = n % 10;
if (n < 0)
{
_putchar(-x + '0');
return (-x);
}
else
{
_putchar(x + '0');
return (x);
}
}
