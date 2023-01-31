#include "lists.h"
/**
*free_listint2 - function frees listint_t
*@head: first parameter
*Return: returns no value
*/

void free_listint2(listint_t **head)
{
listint_t *temp, *n_temp;

if (head != NULL)
{
n_temp = *head;
while ((temp = n_temp) != NULL)
{
n_temp = n_temp->next;
free(temp);
}

*head = NULL;
}
}
