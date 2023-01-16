#include "dog.h"
#include <stdio.h>
/**
*print_dog - prints struct dog
*@d: parameter
*Return: no return value
*/

void print_dog(struct dog *d)
{
if (d == NULL)
return;

else
{
if (d->name == NULL)
{
printf("Name: (nil)");
}
else
{
printf("Name: %s\n", d->name);
}

if (d->age == NULL)
{
printf("(nil)");
}
else
{
printf("Age: %f\n", d->age);
}

if (d->owner == NULL)
{
printf("(nil)");
}
else
{
printf("Owner: %d\n", d->owner);
}
}
}
