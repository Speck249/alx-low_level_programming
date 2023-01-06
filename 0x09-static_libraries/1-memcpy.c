#include "main.h"
/**
*_memcpy - function copies memory area
*@dest: first parameter
*@src: second parameter
*@n: third parameter
*Return: Always 0 (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
