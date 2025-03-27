/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   money.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 11:42:40 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/26 11:42:40 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: compute the number of quarters, nickels, and pennies            */
/*                                                                            */
/*   Usage:                                                              **** */
/* ************************************************************************** */


/********************************************************************************************************
Given an amount less than $1.00 

breakdown of each coin:
	> Quarter: worth 25 cents (0.25 dollars)
	> Dime: Worth 10 cents (0.10 dollars)
	> Nickel: worth 5 cents (0.05 dollars);
	> Penny: worth 1 cent (0.01 dollars);
********************************************************************************************************/
#include <stdio.h>

float money;

int	quarter = 0;
int	dime = 0;
int	nickel = 0;
int	penny = 0;

int	main()
{
	puts("Give me an amount less than $1.00");
	scanf("%f", &money);
	printf("You have %d!\t\n", &money);
	money *= 10;
	printf("You have %d!\t\n", &money);
 
	while(money < 0)
	{
		if (money % 25 == 0)
		{
			quarter++;
			money -= .25			
		}
		else if (money % 10 == 0)
		{
			dime++;
		}
		else if ((money % 5 == 0) && (!(money % 25 == 0)))
		{
			nickel++;
		}	
	}

}
