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
if (n < 0)
n = -n;
return (n % 10);
}
