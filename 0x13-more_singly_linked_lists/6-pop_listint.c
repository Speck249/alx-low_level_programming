#include "lists.h"
/**
*pop_listint -function deletes head node of a listint_t
*@head: first parameter
*Return: Always 0 (Success)
*/

int pop_listint(listint_t **head)
{
listint_t *temp;
int j;

if (*head == NULL)
return (0);

temp = *head;
j = (*head)->n;
*head = (*head)->next;
free(temp);

return (j);
}
