#include <stdio.h>
/**
*main - computes multiples of 3 or 5 < 1024
*Return: Always 0 (success)
*/

int main(void)
{
int n, sum;

for (n = 1; n < 1024; n++)
{
if ((n % 3 == 0) || (n % 5 == 0))
sum += n;
}
printf("%d\n", sum);
return (0);
}
