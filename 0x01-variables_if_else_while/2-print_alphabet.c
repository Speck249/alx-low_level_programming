#include <stdio.h>
#include <string.h>
/**
*main - Prints lowercase Alphabet
*
*Return: Always 0 (Success)
*/

int main(void)
{
char a = 97;
while(a <= 122)
{
putchar(a);
a++;
}
putchar(\'n');
return (0);
}
