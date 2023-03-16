#include "lists.h"
/**
*delete_dnodeint_at_index - deletes node at index
*@head: first parameter
*@index: second parameter
*Return: 1 at success, -1 at failure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *i;
dlistint_t *j;
unsigned int counter;

i = *head;

if (i != NULL)
while (i->prev != NULL)
i = i->prev;

counter = 0;

while (i != NULL)
{
if (counter == index)
{
if (counter == 0)
{
*head = i->next;
if (*head != NULL)
(*head)->prev = NULL;
}
else
{
j->next = i->next;

if (i->next != NULL)
    i->next->prev = j;
}
free(i);
return (1);
}

j = i;
i = i->next;
counter++;
}

return (-1);
}
