#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print variable
 * @d: details
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: no return 
 */
void print_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
if (!(d->name))
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}
printf("Age: %f\n", d->age);
if (!(d->owner))
{
printf("Owner: (nil)\n");
}
else
{
printf("Owner: %s\n", d->owner);
}
}
}
