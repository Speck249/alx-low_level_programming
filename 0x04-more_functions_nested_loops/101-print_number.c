#include "main.h"
/**
*print_number -  function prints an integer
*@n: parameter
*Return: returns no value
*/

void print_number(int n)
{
_putchar((n / 10) + 48);
_putchar((n % 10) + 48);
}
