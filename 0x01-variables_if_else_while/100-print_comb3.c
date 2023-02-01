#include <stdio.h>
/**
*main - prints all possible different combinations of two digits
*
*Return: Always 0 (Success)
*/

int main(void)
{
int i = 48;
int j = 48;

while (j < 58)
{
i = 48;

while (i < 58)
{
if (i != j && j < i)
{
putchar(j);
putchar(i);

if (i == 57 && j == 56)
{
break;
}
putchar(44);
putchar(32);
}
i++;
}
j++;
}

putchar('\n');
return (0);
}
