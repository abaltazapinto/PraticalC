/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   question5-1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 18:12:14 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/22 18:12:14 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: discover why this function print the wrong number           **** */
/*                                                                            */
/*   Usage:                                                              **** */
/* ************************************************************************** */

#include <stdio.h>

int array[3][2];  //Array of numbers

int	main()
{
	int x, y;

	array[0][0] = 0 * 10 + 0;
	array[0][1] = 0 * 10 + 1;
	array[1][0] = 1 * 10 + 0;
	array[1][1] = 1 * 10 + 1;
	array[2][0] = 2 * 10 + 0;
	array[2][1] = 2 * 10 + 1;

	printf("array[%d] ",0);
	printf("[%d] ", array[0][0]);
	printf("[%d] ", array[0][1]);
	puts("\n");

	printf("array[%d] ", 1);
	printf("[%d] ", array[1][0]);
	printf("[%d] ", array[1][1]);
	puts("\n");

	printf("array[%d] ", 2);
	printf("[%d] ", array[2][0]);
	printf("[%d] ", array[2][1]);
	printf("\n");

	return (0);
}
	
