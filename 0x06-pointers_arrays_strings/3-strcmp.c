#include "main.h"
/**
*_strcmp - compares two strings
*@s1: first parameter
*@s2: second parameter
*Return: a non-zero integer if the strings are not equal
*and zero if the strings are equal
*/

int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
j = 1;
break;
}
i++;
}

if (j == 0)
return (0);
else
return (1);
}
