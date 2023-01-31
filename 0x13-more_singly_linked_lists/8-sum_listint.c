#include "lists.h"
/**
*sum_listint - function returns sum of all the data (n) of listint_t
*@head: first parameter
*Return: Always 0 (Success)
*/

int sum_listint(listint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
