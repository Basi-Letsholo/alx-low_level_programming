#include <stdio.h>
#include "lists.h"
/**
 * print_first -  function that prints before main in executed
 * Return: void
 */

void print_first(void) __attribute__((constructor));

void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
