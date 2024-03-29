#include "lists.h"
#include <stdio.h>
/**
*print_listint - function prints all elements of listint_t
*@h: first parameter
*Return: Always 0 (Success)
*/

size_t print_listint(const listint_t *h)
{
size_t node = 0;

while (h != NULL)
{
node++;
printf("%d\n", h->n);
h = h->next;
}

return (node);
}
