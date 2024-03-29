#include "lists.h"
/**
*add_nodeint - adds a new node at the beginning of listint_t
*@head: first parameter
*@n: second parameter
*Return: Always 0 (success)
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));

if (new == NULL)
{
return (NULL);
}

new->n = n;
new->next = *head;

*head = new;

return (new);
}
