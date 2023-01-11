#include "main.h"
/**
*str_concat - function concatenates two strings
*@s1:first parameter
*@s2: second parameter
*Return: Always 0 (Success)
*/

char *str_concat(char *s1, char *s2)
{
unsigned int a, b, c, d;
char *m;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (a = 0; s1[a] != '\0'; a++)
	;

for (b = 0; s2[b] != '\0'; b++)
	;

m = malloc(sizeof(char) * (a + b + 1));

if (m == NULL)
{
free(m);
return (NULL);
}

for (c = 0; c < a; c++)
m[c] = s1[c];

d = b;
for (b = 0; b <= d; c++, b++)
m[c] = s2[b];

return (m);
}
