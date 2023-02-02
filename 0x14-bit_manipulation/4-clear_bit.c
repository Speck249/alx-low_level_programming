#include "main.h"
/**
*clear_bit - sets value of a bit to 0
*@n: first parameter
*@index: second parameter
*Return: 1 at success, -1 otherwise
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int result;

if (index >= 64)
return (-1);

result = 1 << index;

if (*n & result)
*n ^= result;

return (1);
}
