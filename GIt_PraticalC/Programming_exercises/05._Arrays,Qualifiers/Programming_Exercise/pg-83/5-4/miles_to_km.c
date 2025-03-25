/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   miles_to_km.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 11:00:23 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/25 11:00:23 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: Just the need to convert km to miles                       **** */
/*                                                                            */
/*   Usage:                                                              **** */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	double kilometers = 0.00;
	double miles = 0.00;
	puts("What is your velocity in km/s?");
	scanf("%lf", &kilometers);
	miles = (kilometers * 0.6213712);
	printf("You are rolling at %lf miles", miles);
 
	return (0);
}
	
