#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints integers 0-9, using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
