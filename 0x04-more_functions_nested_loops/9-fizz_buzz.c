#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Description: prints 1-100, fizz for multiples of 3,
 * buzz for multiple of 5, fizzbuzz if divisible by 3 & 5
 * Return: 0
 */

int main(void)
{
	int n;
	int mod3;
	int mod5;

	for (n = 1; n <= 100; n++)
	{
		mod3 = n % 3;
		mod5 = n % 5;
		if ((mod3  == 0) && (mod5  == 0))
		{
			printf("FizzBuzz ");
		}
		if ((mod3 == 0) && (mod5 != 0))
		{
			printf("Fizz ");
		}
		if ((mod3 != 0) && (mod5 == 0))
		{
			printf("Buzz");
			if (n != 100)
			{
				printf(" ");
			}
		}
		else if ((mod3 != 0) && (mod5 != 0))
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
