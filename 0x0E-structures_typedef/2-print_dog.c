#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints struct dog
 *
 * @d: struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	struct dog my_dog;

	if (d == NULL)
	{
		exit (0);
	}
	else
	{
		if (my_dog.name == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("Name: %s\n", my_dog->name);
		}
		if (my_dog.age == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("Age: %.6f\n", my_dog->age);
		}
		if (my_dog.owner == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("Owner: %s\n", my_dog->owner);
		}
	}
}
