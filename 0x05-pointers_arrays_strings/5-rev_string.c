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

j = n - 1;
for (i = 0; i < n / 2; i++)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
j--;
}
}
