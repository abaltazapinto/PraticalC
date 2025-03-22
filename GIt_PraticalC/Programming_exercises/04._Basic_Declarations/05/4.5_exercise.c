/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4.5_exercise.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 13:46:23 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/22 13:46:23 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: Make mistakes on purpose                                  ***** */
/*                                                                            */
/*   Usage:                                                              **** */
/* ************************************************************************** */

#include <stdio.h>
/********************************************************************************************************
* AS a warning of misuse of the variables i recceived some warnings                                     *
********************************************************************************************************/

int	main()
{
	// Prints a floating number using the %d conversion
	float number;
	printf("float numbber with erroneous conversion %d", number);

	// Prints an integer using the %f conversion
	int integer;
	printf("prints an integer using the wrong conversion %f", integer);

	// Prints a character using the %d conversion
	char a;
	printf("prints a character using the wrong conversion %d", a);

	return (0); 
}
