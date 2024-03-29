#include "lists.h"
#include <stdio.h>
/**
*listint_len - function returns number of elements of listint_t
*@h: first parameter
*Return: Always 0 (Success)
*/

size_t listint_len(const listint_t *h)
{
size_t elements = 0;

while (h != NULL)
{
elements++;
h = h->next;
}
return (elements);
}
