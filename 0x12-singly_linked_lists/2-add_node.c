#include "lists.h"
/**
*add_node - adds a new node at the beginning of list_t
*@head: first parameter
*@str: second parameter
*Return: Always 0 (success)
*/

list_t *add_node(list_t **head, const char *str)
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
new->next = *head;

*head = new;

return (new);
}
