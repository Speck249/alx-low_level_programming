#include <stdio.h>
/**
*main - prints all possible combinations of Base 10
*Return: Always 0 (Success)
*/

int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
if (i < 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');

return (0);
}
