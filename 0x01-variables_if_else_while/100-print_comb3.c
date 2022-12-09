#include <stdio.h>
/**
*main - prints all possible different combinations of two digits
*
*Return: Always 0 (Success)
*/

int main(void)
{
int i, n;
i = 48;
n = 48;
while (n <= 57)
{
i = 48;
while (i <= 57)
{
putchar(n);
putchar(i);
if(i == 57 && n == 57)
{
break;
}
putchar(44);
putchar(32);
i++;
}
n++;
}
putchar('\n');
return (0);
}
