#include<stdio.h>
/**
 * main - entry point
 *
 * Description: Prints combination of 2 2-digit number combos
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					putchar(a + 48);
					putchar(b + 48);
					putchar(' ');
					putchar(c + 48);
					putchar(d + 48);
					if ((a + b + c + d) != 35)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
