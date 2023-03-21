#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * *new_dog - creates a new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *newowner, *newname;
	struct dog *new;

	new = malloc(sizeof(struct dog));
	if (new == NULL)
	{
		return (NULL);
	}
	newname = malloc(strlen(name) + 1);
	if (newname == NULL)
	{
		free(new);
		return (NULL);
	}
	newname = name;
	newowner = malloc(strlen(owner) + 1);
	if (newowner == NULL)
	{
		free(newname);
		free(new);
		return (NULL);
	}
	newowner = owner;
	new->name = newname;
	new->age = age;
	new->owner = newowner;
	return(new);
}
