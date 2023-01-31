#include "lists.h"
/**
*get_nodeint_at_index - function returns nth node of listint_t
*@head: first parameter
*@index: second parameter
*Return: Always 0 (Success)
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int nodes;

for (nodes = 0; nodes < index; nodes++)
{
if (head == NULL)
return (NULL);

head = head->next;
}
return (head);
}
