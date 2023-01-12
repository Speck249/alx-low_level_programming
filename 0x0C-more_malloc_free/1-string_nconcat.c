#include "main.h"
#include <stdlib.h>
/**
*string_nconcat - function concatenates two strings
*@s1: first parameter
*@s2: second parameter
*@n: third parameter
*Return: Always 0 (success)
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int a, b, c, d;
char *ptr;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (a = 0; s1[a] != '\0'; a++)
	;

for (b = 0; s2[b] != '\0'; b++)
	;

ptr = (int *)malloc(sizeof(char) * ((s1 + a) + n);

if (ptr == NULL)
return (NULL);

for (c = 0; s1[c] < a; c++)
ptr[c] = s1[c];

d = b;
if (n >= (s2 + b))
for (b = 0; s2[b] <= d; c++; b++)
ptr[c] = s2[b];

for (b = 0; s2[b] <= d; c++; b++)
ptr[c] = s2[b];

return (ptr);
}
