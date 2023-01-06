#include <stdio.h>
#include <stdlib.h>
/**
*main - program prints all arguments
*@argc: first parameter
*@argv: second parameter
*Return: returns product
*/

int main(int argc, char *argv[])
{
int a, b, Prod;

if (argc != 3)
{
printf("Error\n");
return (1);
}

else
a = atoi(argv[1]);
b = atoi(argv[2]);
Prod = a * b;
printf("%d\n", Prod);

return (0);
}
