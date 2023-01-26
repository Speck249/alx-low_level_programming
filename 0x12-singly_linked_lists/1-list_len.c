#include "lists.h"
/**
*list_len - function returns number of elements of list_t
*@h: first parameter
*Return: Always 0 (success)
*/

size_t list_len(const list_t *h)
{
size_t memb = 0;

while (h != NULL)
{
memb++;
h = h->next;
}
return (memb);
}
