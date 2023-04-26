#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int i, days_left, is_leap_year;
	int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	is_leap_year = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
	if (is_leap_year && month > 2)
	{
		days_in_month[2] = 29;
	}

	days_left = day;
	for (i = 1; i < month; i++)
	{
		days_left += days_in_month[i];
	}

	if (days_left > 365 || (days_left == 365 && !is_leap_year))
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
	else
	{
		printf("Day of the year: %d\n", days_left);

		if (is_leap_year)
		{
			printf("Remaining days: %d\n", 366 - days_left);
		}
		else
		{
			printf("Remaining days: %d\n", 365 - days_left);
		}
	}
}
