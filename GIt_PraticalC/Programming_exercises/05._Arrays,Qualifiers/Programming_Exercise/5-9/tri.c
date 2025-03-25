/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 18:54:55 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/22 18:54:55 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: why isn't the compiler not seing both width an heigth           */
/*                                                                            */
/*   Usage:                                                              **** */
/* ************************************************************************** */

// i bet is because we are using fgets in the string and trying to obtained two values at once.

#include <stdio.h>

char line[100];
int height;
int width;
int area;

int	main()
{
	printf("Enter width height? ");

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d %d", &width, &height);

	area = (width * height) / 2;
	printf("THe area is %d\n", area);
	return (0);
}
