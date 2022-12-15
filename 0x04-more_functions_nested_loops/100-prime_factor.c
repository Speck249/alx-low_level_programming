#include <stdio.h>
/**
*main - finds the largest prime factor
*Return: Always 0 (Success)
*/

int main(void)
{
long int a = 612852475143, b;

for (b = 2; b <= a; b++)
{
if (a % b == 0)
a = a / b;
b--;
}
printf("%ld\n", b);
return (0);
}
