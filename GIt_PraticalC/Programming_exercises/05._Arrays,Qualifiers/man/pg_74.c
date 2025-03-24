/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pg_74.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 10:59:07 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/24 10:59:07 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: just learn how to do a mmatrix                             **** */
/*                                                                            */
/*   Usage: Chapter 5: Arrays, Qualifiers, and Reading Numbers                */
/* ************************************************************************** */

int	matrix[2][4] = 
 {
	{1,2,3,4},
	{10,20,30,40}
};

Strings can be initialized ina similar manner . For example, to initial;ize the varialble to the name "Sam", we use the statement: 

	char name[] = {'S', 'a', 'm', '\0'};

C has a special shorthand to initialize strings: Surround the string with double quotes ("") to simplify initialization. The previous example could have been written:

	char string[50] = "Sam";

is equivalent to :

	char string[50];


	strcpy[50];

	And array of 50 characters is allocated but the length of the string is 3.
