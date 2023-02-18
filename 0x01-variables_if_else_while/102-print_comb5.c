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
		for (b = a; b <= 9; b++)
		{
			for (c = b; c <= 9; c++)
			{
				for (d = c + 1; d <= 9; d++)
				{
					putchar(a + 48);
					putchar(b + 48);
					putchar(' ');
					putchar(c + 48);
					putchar(d + 48);
					if ((a != 9) && (b != 8))
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
