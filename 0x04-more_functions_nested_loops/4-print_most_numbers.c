#include "main.h"
/**
*print_most_numbers - prints Base 10 except 2 & 4
*Return: Base 10 without 2 & 4
*/

void print_most_numbers(void)
{
int i;

for (i = 48; i < 58; i++)
{
if (i != 50 && i != 52)
{
_putchar(i);
}
_putchar('\n');
}
