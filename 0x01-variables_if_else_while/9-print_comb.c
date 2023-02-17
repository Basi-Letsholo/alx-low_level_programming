#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints integers 0-9, with commas & spaces
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 0; n <= 9; n++)
	{
		putchar (n + 48);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
