#include <stdio.h>
/**
*main - Prints lowercase Alphabet
*
*Return: Always 0 (Success)
*/

int main(void)
{
char a[27] = "abcdefghijklmnopqrstuvwxyz";
int i;
while(i <= 27)
{
putchar(a[i]);
i++;
}
putchar('\n');
return (0);
}
