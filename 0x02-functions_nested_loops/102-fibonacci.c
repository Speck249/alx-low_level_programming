#include <stdio.h>
/**
*main - prints the first 50 Fibonacci numbers
*
*Return: Always 0 (Success)
*/

int main(void)
{
int i;
long int n1, n2, n3;

n1 = 1;
n2 = 2;
printf("%d, %d", n1, n2);

for (i = 0; i < 50; ++i)
{
n3 = n1 + n2;
printf(", %d", n3);
n1 = n2;
n2 = n3;
}
return (0);
}
