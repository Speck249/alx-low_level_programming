#include "lists.h"
#include <stdio.h>
/**
*print_list - function prints elements of list_t
*@h: first parameter
*Return: Always 0 (success)
*/

size_t print_list(const list_t *h)
{
size_t node = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");

else
printf("[%d] %s\n", h->len, h->str);

node++;
h = h->next;
}

return (node);
}
