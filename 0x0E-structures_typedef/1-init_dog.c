#include "dog.h"
/**
*init_dog - initializes the dog Structure
*@d: first parameter
*@name: second parameter
*@age: third parameter
*@owner: fourth parameter
*Return: returns no value
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d-owner = owner;
}
}