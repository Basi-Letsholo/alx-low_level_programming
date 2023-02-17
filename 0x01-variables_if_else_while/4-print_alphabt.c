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

	for (az = 'a'; (az <= 'z') && !(az = 'e' || 'q'); az++)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
