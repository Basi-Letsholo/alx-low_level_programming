#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - Entry point
 *
 * Description: prints if last digit is less thasix, more than five, or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	printf("Last digit of %d", n);
	if (ld == 0)
	{
		printf(" is %d", ld);
		printf(" and is 0");
	}
	else if (ld > 5)
	{
		printf(" is %d", ld);
		printf(" and is greater than 5");
	}
	else if (ld < 6 && ld != 0)
	{
		printf(" is %d", ld);
		printf(" and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
