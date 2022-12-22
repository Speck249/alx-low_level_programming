#include "main.h"
/**
*cap_string - capitalizes all words of a string
*@s: parameter
*Return: Always 0 (Success)
*/

char *cap_string(char *s)
{
int i;
int j = 13;
int n = 0;
char sep[] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

while (s[n])
{
i = 0;

while (i < j)
{
if ((n == 0 || s[n - 1] == sep[i]) && (s[n] >= 97 && s[n] <= 122))
s[n] = s[n] - 32;
i++;
}
n++;
}
return (s);
}
