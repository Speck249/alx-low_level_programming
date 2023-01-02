#include "main.h"
/**
*_memset - function fills memory with a constant byte
*@s: first parameter
*@b: second parameter
*@n: third parameter
*Return: Always 0 (Success)
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
