#include <stdio.h>
/**
*main - prints the sum of the even-valued terms
*Return: Always 0 (Success)
*/

int main(void)
{
long int n, n1, n2, n3;

n1 = 1;
n2 = 2;
n3 = n = 0;

while (n <= 4000000)
{
n3 = n1 + n2;
n1 = n2;
n2 = n3;
if ((n1 % 2) == 0)
{
n = n + n1;
}
}
printf("%ld\n", n);
return (0);
}
