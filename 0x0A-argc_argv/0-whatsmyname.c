#include <stdio.h>
/**
*main - prints program name
*@argc: first parameter
*@argv: second parameter
*Return: returns program name
*/

int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s\n", argv[0]);
return (0);
}
