#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints last digit of integer
 * @n: integer
 * return: n % 10
 */

int print_last_digit(int n)
{
	printf("%d", (n % 10));
	return (n % 10);
}
