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
printf("%ld, %ld", n1, n2);

for (i = 0; i < 48; i++)
{
n3 = n1 + n2;
printf(", %ld", n3);
n1 = n2;
n2 = n3;
}
printf("\n");
return (0);
}
