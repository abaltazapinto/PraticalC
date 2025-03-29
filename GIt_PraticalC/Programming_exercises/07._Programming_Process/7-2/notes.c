/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   notes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 10:30:47 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/29 10:30:47 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose:  Got some info about dates                                 **** */
/*                                                                            */
/*   Usage:                                                              **** */
/* ************************************************************************** */

/********************************************************************************************************
	setdate() Method;

	getdate() function is defined in dos.h header file. This function fills the data structure *dt with
	the system's current date. Syntax.

	>
		Struct date dt;
		getdate (&dt);
	> 

	Below a C program to demonstrate the getdate() method 
********************************************************************************************************/

#include <stdio.h>
#include <time.h>
	
int	main()
{
	time_t current_time;
	struct tm * time_info;
//	struct tm new_time;

	// Get the current system date
	time(&current_time);
	time_info = localtime(&current_time);
	
	printf("System's current date \n");
	printf("%02d/%02d/%04d\n", time_info->tm_mday, time_info->tm_mon + 1, time_info-> tm_year + 1900);

/*
	// how to get the date
	printf("Enter new date (DD/MM/YYYY): \n");
	scanf("%d/%d/d", &tm.tm_mday, &tt.tm_mon, &tm.tm_year);
*/
	return 0;
}	

