/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fibonnaci_pg_89.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:30:03 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/26 08:30:03 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: Undesrtstand how to compute ficonnacci                     **** */
/*                                                                            */
/*   Usage:                                                              **** */
/* ************************************************************************** */

/********************************************************************************************************
The first two stepps of the fibonnaci sequence are `1 and 1 . We initialize the first two terms to these values. 
Putting all together, we get the code in Example 6-1.

********************************************************************************************************/
#include <stdio.h>

int old_number;
int current_number;
int next_number;

int main()
{
	/* start thihngs out */
	old_number = 1 ;
	current_number = 1;

	printf("1\n");

	while (current_number < 100) 
	{
		printf("%d\n", current_number);
		next_number = current_number + old_number;
		
		old_number = next_number;
		current_number = next_number;
	}
	return (0);
}
