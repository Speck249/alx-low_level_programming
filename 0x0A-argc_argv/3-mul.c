#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*main - program prints all arguments
*@argc: first parameter
*@argv: second parameter
*Return: returns product
*/

int main(int argc, char *argv[])
{
int a, b, Prod;

if (argc == 2)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
Prod = a * b;
printf("%d\n", Prod);
}

else
{
printf("Error\n");
return (1);
}
return (0);
}
