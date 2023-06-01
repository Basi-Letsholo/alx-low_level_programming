#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints sum of even values of fibonacci below 4 million
 * Return: 0 on success
 */

int main(void)
{
	long int i, sum = 0, arr[50];

	arr[0] = 1;
	arr[1] = 2;

	for (i = 2; i < 50; i++)
	{
		arr[i] = arr[i - 2] + arr[i - 1];
	}

	i = 0;
	while (arr[i] < 4000000)
	{
		if (arr[i] % 2 == 0)
		{
			sum += arr[i];
		}
	}
	printf("%ld\n", sum);

	return (0);
}
