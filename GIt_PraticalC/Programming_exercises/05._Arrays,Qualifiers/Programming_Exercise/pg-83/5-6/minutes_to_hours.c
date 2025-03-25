/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minutes_to_hours.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 11:28:54 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/25 11:28:54 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: transform minutes to hours                                 **** */
/*                                                                            */
/*   Usage:                                                              **** */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int hours;
	int minutes = 0;
	char line[90];
	int total_minutes;

	puts("Enter the total minutes\n");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d minutes", &total_minutes);
	printf("You have have typed %d minutes. \n", total_minutes);
	if(total_minutes > 60)
	{
		hours = total_minutes / 60;
		minutes = total_minutes % 60;
		printf("In total you have %d hours and %d minutes", hours, minutes);
		return (0);	
	}
	printf("In total you have %d minutes", total_minutes);
	return (0);
}
