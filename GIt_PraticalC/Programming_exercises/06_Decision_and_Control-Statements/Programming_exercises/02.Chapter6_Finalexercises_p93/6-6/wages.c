/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wages.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:36:33 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/27 10:36:33 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: To be able to know how many money we receive                    */
/* COunt any hours over 40 as overtime as time and a half                     */
/*   Usage:                                                              **** */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	while (1)

	{
		int hours = 0;
		int extra = 0;
		int wage = 0;
		int weeklywage;

		puts("How many hours did you worked this week?");
		scanf("%d", &hours);	
		puts("How much money you do per hour $ ?");
		scanf("%d", &wage);
		if (hours > 40)
		{
			extra = hours - 40;
			weeklywage = (40 * wage) + (extra * (wage * 1.5));
			printf("\tThis week you will receive %d $\n", weeklywage);
		}
		else
		{

			weeklywage = (hours*wage);
                	printf("\tThis week you will receive %d $\n", weeklywage);
		}
	}

	return (0);
}
