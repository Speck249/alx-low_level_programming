#include "main.h"
/**
*_strspn - function gets length of a prefix substring
*@s: first parameter
*@accept: second parameter
*Return: Always 0 (Success)
*/

unsigned int _strspn(char *s, char *accept)
{
int i;
unsigned int j = 0;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
j++;
break;
}

else if (accept[i + 1] == '\0')
return(j);
}
s++;
}
return (j);
}
