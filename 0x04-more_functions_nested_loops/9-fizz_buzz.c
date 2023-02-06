#include <stdio.h>
/**
*main - executes the Fizz-Buzz test
*Return: Always 0 (Success)
*/

int main(void)
{
int n;

for (n = 1; n < 101; n++)
{
if ((n % 3 == 0) && (n % 5 == 0))
{
printf("FizzBuzz");
}
else if (n % 3 == 0)
{
printf("Fizz");
}
else if (n % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", n);
}

if (n < 100)
{
putchar(32);
}
}

return (0);
}
