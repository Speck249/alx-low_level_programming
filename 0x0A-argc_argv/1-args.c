#include <stdio.h>
/**
*main - program prints number of arguments
*@argc: first parameter
*@argv: second parameter
*Return: returns number of arguments
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
