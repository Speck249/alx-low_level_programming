#include "function_pointers.h"
/**
*print_name - function prints name;
*@name: first parameter
*@f: second parameter
*Return: no return value
*/

void print_name(char *name, void (*f)(char *))
{
if (name && f != NULL)
f(name);
}
