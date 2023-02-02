#include "main.h"
/**
*get_bit - finds value of bit at given index
*@n: first parameter
*@index: second index
*Return: returns value of bit at index
*/

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

if (n == 0 && n == 64)
return (0);

return (1);
}
