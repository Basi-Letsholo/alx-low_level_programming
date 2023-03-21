#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory in dog
 *
 * @d: struct
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(dog);
}
