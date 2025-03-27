/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   total.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:42:44 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/26 08:42:44 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: Using the while (1) just to have a continued loop          **** */
/*                                                                            */
/*   Usage:                                                              **** */
/* ************************************************************************** */

#include <stdio.h>


char line[100];
int total;
int item;

int	main()
{
	total = 0;
	while (1)
	{
		printf("Enter # to add \n");
		printf("  or 0 to stop:");

		if (fgets(line, sizeof(line), stdin) == NULL)
		{
			printf("\n Error reading input. Exiting.\n");
			break;
		}
		
		if (sscanf(line, "%d", &item) != 1)
		{
			printf("Invalid input. Please enter a number.\n");
			continue;
		}

		if (item == 0)
			break;

		total += item;
		printf("Total: %d\n", total);
	}
	
	printf("Final total %d\n", total);
	return (0);
}
