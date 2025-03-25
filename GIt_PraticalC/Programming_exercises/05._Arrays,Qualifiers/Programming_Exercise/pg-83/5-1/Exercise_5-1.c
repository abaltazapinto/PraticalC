/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exercise_5-1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:27:06 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/25 09:27:06 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: Write a program that converts Centigrade to Farenheit      **** */
/*                                                                            */
/*   Usage: WHen i go to USA or Canada i will need it i think            **** */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int C = 0;
	int F;

	puts("What are the temperature right now in centigrades?");
	scanf("%d", &C);
	F = (9.0 / 5.0 * C) + 32;
	printf("The correspondent fahrenheit degrees is %d", F);
	
	return (0);
}

