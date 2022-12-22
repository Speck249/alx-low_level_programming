#include "main.h"
/**
*leet - encodes a string into 1337
*@s: parameter
*Return: Always 0 (Success)
*/

char *leet(char *s)
{
int i = 0;
int j;
int n = 5;
char str[5] = {65, 69, 79, 84, 76};
char rep[5] = {52, 51, 48, 55, 49};

while (s[i])
{
j = 0;

while (j < n)
{
if (s[i] == str[j] || s[i] - 32 == str[j])
s[i] = rep[j];
j++;
}
i++;
}
return (s);
}
