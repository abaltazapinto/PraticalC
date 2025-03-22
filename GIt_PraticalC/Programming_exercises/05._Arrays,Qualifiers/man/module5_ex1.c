/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   module5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 14:03:23 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/22 14:03:23 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: just coying the examples given by the book                 **** */
/*                                                                            */
/*   Usage:                                                              **** */
/* ************************************************************************** */
#include <stdio.h>
/********************************************************************************************************
*  Example 5-1 array /arrray.c
********************************************************************************************************/

float data[5];
float total;
float average;

int	main()
{
	data[0] = 34.0;
	data[1] = 27.00;
	data[2] = 45.00;
	data[3] = 82;
	data[4] = 22.0;

	total = data[0] + data[1] + data[2] + data[3] + data[4];
	average = total / 5.0;
	printf("Total %f average %f\n", total, average); 
	return 0;
}
