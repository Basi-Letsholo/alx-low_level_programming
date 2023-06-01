#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
	int month;
	int day;
	int year;

	month = 03;
	day = 1;
	year = 2008;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	printf("Date: 02/29/2000\n");
	day = convert_day(02, 29);
	print_remaining_days(02, day, 2000);

	printf("Date: 12/31/4000\n");
	day = convert_day(12, 31);
	print_remaining_days(12, day, 4000);

	return (0);
}
