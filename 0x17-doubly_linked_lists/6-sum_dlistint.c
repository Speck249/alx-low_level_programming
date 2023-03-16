#include "lists.h"
/**
*sum_dlistint - returns sum of data
*@head: parameter
*Return: sum
*/

int sum_dlistint(dlistint_t *head)
{
int result = 0;

if (head != NULL)
{
while (head->prev != NULL)
head = head->prev;

while (head != NULL)
{
result += head->n;
head = head->next;
}
}

return (result);
}
