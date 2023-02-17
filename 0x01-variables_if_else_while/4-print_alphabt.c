#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: Print alphabet, w/o e,q
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char az;

	az = 'a';
	while (az <= 'z')
	{
		if ((az != 'e' && az != 'q') && az <= 'z')
		{
			putchar(az);
		}
		az++;
	}
	putchar('\n');
	return (0);
}
