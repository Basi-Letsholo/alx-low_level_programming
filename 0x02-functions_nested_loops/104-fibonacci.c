#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints first 98 fibonacci numbers
 * Return: 0 on success
 */

int main(void)
{
	long int i, arr[98];

	arr[0] = 1;
	arr[1] = 2;

	for (i = 2; i < 98; i++)
	{
		arr[i] = arr[i - 2] + arr[i - 1];
	}

	for (i = 0; i < 97; i++)
	{
		printf("%ld, ", arr[i]);
	}
	printf("%ld\n", arr[97]);

	return (0);
}
