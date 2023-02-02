#include "main.h"
/**
*binary_to_uint - converts binary to unsigned int
*@b: parameter
*Return: an unsigned integer
*/

unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int result = 0;

if (!b)
return (0);

while (b[i])
{
if (b[i] != 48 && b[i] != 49)
{
return (0);
}
result = 2 * result + (b[i] - 48);
i++;
}

return (result);
}
