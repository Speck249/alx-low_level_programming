#include "main.h"
/**
*print_last_digit - function prints the last digit of a number
*
*Return: Always 0 (Success)
*/

int print_last_digit(int)
{
int x, n;
x = n % 10;
if (n < 0)
{
return (-x);
}
else 
{
return (x);
}
_putchar('\n');
}
