#include "dog.h"
#include <stdlib.h>
/**
*new_dog - Create new struct
*@name: first parameter
*@age: second parameter
*@owner: third parameter
*Return: returns new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d_t;
int i, j, k;

d_t = malloc(sizeof(*d_t));

if (d_t == NULL || name == NULL || owner == NULL)
{
return (NULL);
}

for (j = 0; name[j]; j++)
	;
for (k = 0; owner[k]; k++)
	;

d_t->name = malloc(j + 1);
d_t->owner = malloc(k + 1);

if (d_t->name == NULL || d_t->owner == NULL)
{
free(d_t->name);
free(d_t->owner)
free(d_t);
return (NULL);
}

for (i = 0; i < j; i++)
d_t->name[i] = name[i];
d_t->name[i] = '\0';
d_t->age = age;

for (i = 0; i < k; i++)
d_t->owner[i] = owner[i];
d_t->owner[i] = '\0';

return (d_t);
}
