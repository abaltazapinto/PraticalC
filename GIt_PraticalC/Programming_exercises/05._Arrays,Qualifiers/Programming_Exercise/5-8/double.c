/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 18:40:28 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/22 18:40:28 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: Learning how to use sscanf for scanning strings            **** */
/*                                                                            */
/*   Usage: For strings                                                  **** */
/* ************************************************************************** */

#include <stdio.h>
char line[100]; // input line from the console
int value; // a value to double

int	main()
{
	puts("Enter a value");


	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &value);
	
	printf("Twice %d is %d",value, value *2);
	return(0);
}



