#include "main.h"
/**
*_strcat - concatenates two strings
*@dest: first parameter
*@src: second parameter
*Return: Always 0 (Success)
*/

char *_strcat(char *dest, char *src)
{
int i, j = 0;

while (dest[j])
j++;

for (i = 0; src[i] != '\0'; i++)
{
dest[j] = sr[i];
j = j + 1;
}

dest[j] = '\0';
return (dest);
}
