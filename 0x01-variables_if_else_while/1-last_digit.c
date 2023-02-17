#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - entry point
 *
 * description: if last digit greater or less than int
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	for ((n%10) == 0)
	return (0);
}
