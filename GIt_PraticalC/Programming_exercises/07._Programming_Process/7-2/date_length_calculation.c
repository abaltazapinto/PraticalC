/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   date_length_calculation.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 10:42:25 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/29 10:42:25 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: Enter two dates and calculate de date_length in between    **** */
/*                                                                            */
/*   Usage:                                                              **** */
/* ************************************************************************** */

/********************************************************************************************************
	firsts thougths

		> WE need to scan the input of DD/MM/YEAR;
		> and we have to be able to compute the length in between.

	1. We need to calculate the number of days between them. This requires:

		> Leap years
		> Different month lengths
		> Input validation
	
	2. Break it Down:

		> Step 1 : Parse the user's input (DD/MM/YYYY) (format).
		> Step 2 : Validate the input (e.g. correct day range for each month, leap year checks).
		> Step 3 : Convert the dates to a common format (e.g., days since a reference date).
		> Step 4 : Calculate the difference
		> Step 5 : Display the result.
	
	3. Key points:
		> A learp year is divisible by 4, but not by 100 unless it's also divisible by 400.
		> Months have different lengths (30, 31, 28/29).
		> Conversion to a common format makes the calculation easier (e.g., total days from year 0)

	PSEUDOCODE PLAN:

		 1. Get input for date 1 (DD/MM/YYYY)
		 2. Get input for date 2 (DD/MM/YYYY)
		 3. Check if dates are valid.
		 4. Define a function to calculate "days since year 0" for each date:
			- Account for leap years
			- Sum days from previous years and months.
		5. Substract the two values to get the difference.
		6. Print the result.
		

********************************************************************************************************\
********************************************************************************************************/

#include <stdio.h>

int	is_leap_year(int year)
{
	return (year% 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

//Function to calculate the total of days since year 0
int days_since_year_zero(int day, int month, int year)
{
	int days = 0;
	// creating an array for the months
	int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i = 0;
	// Count days for complete years
	while(i < year)
	{
		days += is_leap_year(i) ? 366 : 365;
		i++;
	}
	// If it is leap year february has 29 days
	if (is_leap_year(year))
		month_days[1] = 29;
	// Count days for complete months of the current year
	i = 0;
	while(i < month -1)
	{
		days += month_days[i];
		i++; 
	}
	
	// Adding the remaining days
	days += day;

	return days;
}

int	main() 
{

	int d1, m1, y1, d2, m2, y2;
	int diff;

	//input first date
	printf("Enter the first date (DD/MM/YYY): ");
	scanf("%d/%d/%d", &d1, &m1, &y1);

	printf("Enter the second date (DD/MM/YYYY): ");
	scanf("%d/%d/%d", &d2, &m2, &y2);

	// Calculate the difference
	int total_days1 = days_since_year_zero(d1,m1,y1);
	int total_days2 = days_since_year_zero(d2,m2,y2);

	diff = total_days2 - total_days1;
	if (diff < 0) diff = -diff;

	printf("Difference in days: %d\n", diff);

	return 0;
}
