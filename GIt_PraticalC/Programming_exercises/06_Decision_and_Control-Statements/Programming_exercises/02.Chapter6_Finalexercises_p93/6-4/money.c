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
#include <math.h>

double money;
char line[20];
int cents;

int	quarter = 0;
int	dime = 0;
int	nickel = 0;
int	penny = 0;

int	main()
{
	puts("\tGive me an amount less than $1.00\n");
	fgets(line, sizeof(line), stdin);
	sscanf(line,"%lf", &money);

	cents = (int)(money * 100 + 0.5);
	while (1)
	{
		if (cents >= 100)
		{
			puts("Give money less than 1.00, please \n ");
			break;
		}
		if  (cents <= 0)
		{
			puts("Give positive numbers less than 1.00, please \n");
			break;
		}

		break;
	}
	printf("\tYou have %.2f!\t\n", money);
	printf("\tYou have %d cents!\t\n", cents);

	while(cents > 0)
	{
		if (cents >= 25)
		{
			quarter++;
			cents -= 25;
			continue;			
		}
		else if (cents >= 10)
		{
			dime++;
			cents -= 10;
			continue;
		}
		else if (cents >= 5)
		{
			nickel++;
			cents -= 5;
			continue; 
		}	
		else 
		{
			penny++;
			cents -= 1;
			continue; 
		}

		break;
	}
	printf("\t In total you have:\n\t> %d quarter(s), \n\t> %d dime(s), \n\t> %d nickel(s), \n\t> %d penny(ies)\n", quarter, dime, nickel, penny);
	return(0);
}
