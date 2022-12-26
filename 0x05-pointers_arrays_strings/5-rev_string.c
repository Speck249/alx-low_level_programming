#include "main.h"
/**
*rev_string - reverses string
*@s: parameter
*Return: returns no value
*/

void rev_string(char *s)
{
int n, i, j;
char temp;

n = 0;
j = 0;

while (s[n] != '\0')
n++;

for (i = 0; i < n / 2; i++)
{
temp = s[i];
s[i] = s[j - 1 - i];
s[j - 1 - i] = temp;
j--;
}
}
