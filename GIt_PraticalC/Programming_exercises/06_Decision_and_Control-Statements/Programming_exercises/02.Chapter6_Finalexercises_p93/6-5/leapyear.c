/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leapyear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:18:07 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/27 10:18:07 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: As you all know typical program about leap years           **** */
/*                                                                            */
/*   Usage:                                                              **** */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int year;

	while(1)
	{
		puts("\tInsert a year, to discover if it is a leap year:  \n press 0 to exit \n");
		scanf("%d", &year);

		if(year == 0)
			break;

		if((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
		{
			puts("\tLEAP YEAR !!!!\n");
		}

		else
		{
			puts("\tNOT A LEAP YEAR");
		}
	
	}
	return (0);
}
