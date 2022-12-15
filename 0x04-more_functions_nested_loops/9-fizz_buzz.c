#include <stdio.h>
#include <stdlib.h>
/**
*main - executes the Fizz-Buzz test
*Return: Always 0 (Success)
*/

int main(void)
{
int i;
char a[4] = "Fizz";
char b[4] = "Buzz";
char c[8] = "FizzBuzz";

for (i = 1; i < 101; i++)
{
if (i == 100)
{
printf("%s ", b);
}
else if ((i % 3 == 0) && (i % 5 == 0))
{
printf("%s ", c);
}
else if (i % 3 == 0)
{
printf("%s ", a);
}
else if (i % 5 == 0)
{
printf("%s ", b);
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
