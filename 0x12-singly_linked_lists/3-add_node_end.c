#include "lists.h"
#include <string.h>
/**
*add_node_end - adds a new node at the end of list_t
*@head: first parameter
*@str: second parameter
*Return: Always 0 (success)
*/

list_t *add_node_end(list_t **head, const char *str)
{
int len;
char *duplicate;
list_t *new;

new = malloc(sizeof(list_t));

if (new == NULL)
{
return (NULL);
}

duplicate = strdup(str);

if (duplicate == NULL)
{
free(new);
return (NULL);
}

for (len = 0; str[len];)
len++;

new->str = duplicate;
new->len = len;
new->next = NULL;

if (*head == NULL)
*head = new;

else
{
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
}

return (*head);
}
