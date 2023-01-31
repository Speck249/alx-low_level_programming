#include "lists.h"
/**
*free_listint - function frees listint_t
*@head: first parameter
*Return: returns no value
*/

void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
