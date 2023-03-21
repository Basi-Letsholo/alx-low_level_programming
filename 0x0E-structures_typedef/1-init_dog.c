#include <string.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialises variables of type struct dog
 *
 * @d: struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}