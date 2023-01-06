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
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}

return (*s1 - *s2);
}
