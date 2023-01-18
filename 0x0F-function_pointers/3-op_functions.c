#include "3-calc.h"
/**
*op_add - function returns sum
*@a: first parameter
*@b: second parameter
*Return: Always 0 (Success)
*/

int op_add(int a, int b)
{
return (a + b);
}

/**
*op_sub - function returns difference
*@a: first parameter
*@b: second parameter
*Return: Always 0 (Success)
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
*op_mul - function returns product
*@a: first parameter
*@b: second parameter
*Return: Always 0 (Success)
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
*op_div - function returns division
*@a: first parameter
*@b: second parameter
*Return: Always 0 (Success)
*/
int op_div(int a, int b)
{
{
if (b == 0)
printf("Error");
exit(98);
}
return (a / b);
}

/**
*op_mod - function returns remainder
*@a: first parameter
*@b: second parameter
*Return: Always 0 (Success)
*/
int op_mod(int a, int b)
{
{
if (b == 0)
printf("Error");
exit(98);
}
return (a % b);
}
