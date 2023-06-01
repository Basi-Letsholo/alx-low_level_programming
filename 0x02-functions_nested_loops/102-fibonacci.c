#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints first 50 fibonacci numbers, from 1, 2, ..
 * Return: 0 on success
 */

int main(void)
{
	long int i, arr[50];

	arr[0] = 1;
	arr[1] = 2;

	for (i = 2; i < 50; i++)
	{
		arr[i] = arr[i - 2] + arr[i - 1];
	}
	for (i = 0; i < 49; i++)
	{
		printf("%ld, ", arr[i]);
	}
	printf("%ld\n", arr[49]);
	return (0);
}
