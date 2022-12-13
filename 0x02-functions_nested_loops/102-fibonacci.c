#include <stdio.h>
/**
*main - prints the first 50 Fibonacci numbers
*
*Return: Always 0 (Success)
*/

int main(void)
{
int n1 = 1, n2 = 2, n3, i;
printf("%d, %d\n", n1, n2);

for (i = 3; i <= 50; ++i)
{
n3 = n1 + n2;
printf ("%d, ", n3);
n1 = n2;
n2 = n3;
}
}
