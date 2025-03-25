/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perimeter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:14:38 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/25 10:14:38 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: How to get the perimeter of a rectangle                         */
/*                                                                            */
/*   Usage:                                                              **** */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	char line[50];
	double width;
	double height;
	double perimeter;

	puts("Let's go an calculate the perimeter of a rectangle!");
	puts("Give me in one string the witdth and the height of the rectangle");
	fgets(line, sizeof(line),stdin);
	sscanf(line, "%lf %lf", &width , &height);
	perimeter = 2*(width + height);
	printf("The perimeter of your rectangle is %.2f", perimeter);	
	
	return (0);
}
