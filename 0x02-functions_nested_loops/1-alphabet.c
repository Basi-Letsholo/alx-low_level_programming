#include<stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * description: prints alphabet, a to z
 *
 * return: always 0 (success)
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
