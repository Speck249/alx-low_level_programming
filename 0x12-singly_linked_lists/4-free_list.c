#include "lists.h"
/**
*free_list - function frees list_t
*@head: first parameter
*Return: returns no value
*/

void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
