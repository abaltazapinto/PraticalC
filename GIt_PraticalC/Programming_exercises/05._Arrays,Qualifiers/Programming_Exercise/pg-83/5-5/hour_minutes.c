/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hour_minutes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 11:11:14 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/25 11:11:14 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: taking hout and minutes                                    **** */
/*                                                                            */
/*   Usage:                                                              **** */
/* ************************************************************************** */


#include <stdio.h>

int	main()
{
	int hours;
	int minutes;
	char line[90];

	puts("Enter the hours and minutes\n");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d %d", &hours, &minutes);
	printf("You have have typed %d hours and %d minutes. \n", hours, minutes);
	if(hours > 0)
	{
		int total_minutes = 0;
		total_minutes = (hours * 60) + minutes;
		printf("In total you have %d minutes", total_minutes);
		return (0);
	}
	
	printf("In total you have %d minutes", minutes);
	return (0);
}
