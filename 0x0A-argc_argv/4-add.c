#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
*main - program prints sum
*@argc: first parameter
*@argv: second parameter
*Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
int i, j, Sum = 0;

if (argc == 1)
{
putchar(48);
putchar('\n');
}

else
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
Sum += atoi(argv[i]);
}
printf("%d\n", Sum);
}
return (0);
}

