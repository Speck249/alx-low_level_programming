#include <stdio.h>
/**
*main - prints the sum of the even-valued terms
*
*Return: Always 0 (Success)
*/

int main(void)
{
long int n1, n2, n3, x;

n1 = 1;
n2 = 2;
n3 = x = 0;

while (x <= 4000000)
{
n3 = n1 + n2;
n1 = n2;
n2 = n3;
if ((n1 % 2) == 0)
{
x = x + n1;
}
}
printf("%ld\n", x);
return (0);
}
