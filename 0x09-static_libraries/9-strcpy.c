#include "main.h"
/**
*_strcpy - copies the string pointed to by src
*@dest: parameter
*@src: parameter
*Return: Always 0 (Success)
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (i >= 0)
{
*(dest + i) = *(src + i);

if (*(src + i) == '\0')
break;
i++;
}
return (dest);
}
