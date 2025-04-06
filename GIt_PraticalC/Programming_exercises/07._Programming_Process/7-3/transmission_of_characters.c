/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transmission_of_characters.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 17:55:52 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/29 17:55:52 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: Calculate how many time is required to a program to send a file */
/*                                                                            */
/*   Usage: Sending files                                                **** */
/* ************************************************************************** */

/********************************************************************************************************
	first thoughts
		
	> We need the time we need a second for transmit 960 characters
	> how we can think in terms of file size knowing only the characters?
	> Try 400MB (419,430,400-byte) and i know that one character is one byte.
	> We can then divide the 400MB by 960 an that it will give us the seconds needed to transfer that

	1. We need common velocity per transmission of characters per second
		> velocity = 960 cps | 57,600 cpm (per minute) | 3,456,000 cph (per hour)
	2. Break it down
		> Now knowing the transmission rate per hour we divide the 400MB for the character in 24hours.

	3. Key points:
		> Through the rate of tranmission per day we can obtain the total time.
	
	4. PSEUDOCODE PLAN

		1. make a function that returns the days that we need for transmiting that file
		2. In the main section making a printf with the information. Print the result.

********************************************************************************************************/

#include <stdio.h>

int	days_needed_to_transmit_file(long MB)
{
	//transmission rate : 960 cps = 3.456.000 B / hour (~3.3 MB/hour);
	long bytes_per_hour = 960.0 * 3600.0; // 3 456 000 B / hour
	long bytes_per_day = bytes_per_hour * 24;
	long file_bytes = MB * 1024 * 1204; // CONVERT MB to BYTES
	double days = (double) file_bytes / bytes_per_day;
	return days;
}	

int	main()
{
	while(1)
	{
		long file_size_mb;
		puts("How many mega bytes has your file?");
		scanf("%ld", &file_size_mb);
		double days = days_needed_to_transmit_file(file_size_mb);
	printf("\n\tFor transmitting %ld MB of memory it will need **%.2f days**.", file_size_mb, days);
	}
}
