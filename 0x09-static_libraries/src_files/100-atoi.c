#include "main.h"
/**
*_atoi - converts string to integer
*@s: parameter
*Return: Always 0 (success)
*/

int _atoi(char *s)
{
int i = 0;
int j = 0;
int k = 0;
int l = 0;
int n = 0;
int number = 0;

while (s[n] != '\0')
n++;

while (i < n && l == 48)
{
if (s[i] == '-')
++j;

if (s[i] >= 48 && s[i] <= 57)
{
number = s[i] - 48;
if (j % 2)
number = -number;
k = k * 10 + number;
l = 1;

if (s[i + 1] < 48 || s[i + 1] > 57)
break;

l = 48;
}
i++;
}

if (l == 48)
return (0);

return (k);
}
