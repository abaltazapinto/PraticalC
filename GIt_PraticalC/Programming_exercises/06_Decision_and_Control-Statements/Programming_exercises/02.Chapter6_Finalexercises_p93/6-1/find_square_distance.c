/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square_distance.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 09:13:12 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/26 09:13:12 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose:  Write a program to find the square of the distance between two */
/*   points. For more advanced problem find the actual distance               */
/*                                                                            */
/*   Usage:  This is Eucledian formula, for gps we need to use the            */
/* 	Haversine formula                                                **** */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	main()
{
	float x1, y1, x2, y2, gdistance; // Declar the variables needed for coordinates and distance

	// Prompt user for coordinates (x1, y1) and store them;
	puts("Input x1: \n");
	scanf("%f", &x1);
	puts("Input y1: ");
	scanf("%f", &y1);

	//Prompt user for coordinates (x2, y2) amd store them.
	puts("Input x2: \n");
	scanf("%f", &x2);
	puts("Input y2: \n");
	scanf("%f", &y2);

	// calculate squared distance bettween points
	gdistance = ((x2-x1) * (x2-x1))+((y2-y1)*(y2-y1));

	//Calculate and print the distance and the square distance
	printf("Square distance between the two points: %.4f\n", gdistance);
	printf("distance between the two points by using sqrt: %.4g\n", sqrt(gdistance));

	return (0);
}
