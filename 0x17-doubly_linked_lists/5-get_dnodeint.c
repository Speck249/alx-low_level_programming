#include "lists.h"
/**
*get_dnodeint_at_index - returns nth node
*@head: first parameter
*@index: second parameter
*Return: nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int counter;

if (head == NULL)
return (NULL);

while (head->prev != NULL)
head = head->prev;

counter = 0;

while (head != NULL)
{
if (counter == index)
break;
head = head->next;
counter++;
}

return (head);
}
