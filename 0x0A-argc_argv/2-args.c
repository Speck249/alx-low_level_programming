#include <stdio.h>
/**
*main - program prints all arguments
*@argc: first parameter
*@argv: second parameter
*Return: returns argument value
*/

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
