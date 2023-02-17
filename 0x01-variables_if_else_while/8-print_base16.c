#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints numbers in base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 0; n <= 9; n++)
	{
		putchar (n + 48);
	}
	for (n = 10; n <= 15; n++)
	{
		putchar (n + 87);
	}
	putchar('\n');
	return (0);
}
