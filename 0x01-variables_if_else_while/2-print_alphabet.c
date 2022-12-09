#include <stdio.h>
/**
*main - Prints lowercase Alphabet
*
*Return: Always 0 (Success)
*/

int main(void)
{
char a[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
while (i <= 26)
{
putchar(a[i]);
i++;
}
putchar('\n');
return (0);
}
