#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints sum of even values of fibonacci below 4 million
 * Return: 0 on success
 */

int main(void)
{
	long int i, j = 0, sum = 0, arr[35];

	arr[0] = 1;
	arr[1] = 2;

	for (i = 2; i < 35; i++)
	{
		arr[i] = arr[i - 2] + arr[i - 1];
	}

	while (arr[j] < 4000000)
	{
		if ((arr[j] % 2) == 0)
		{
			sum += arr[j];
		}
		j++;
	}
	printf("%ld\n", sum);

	return (0);
}
