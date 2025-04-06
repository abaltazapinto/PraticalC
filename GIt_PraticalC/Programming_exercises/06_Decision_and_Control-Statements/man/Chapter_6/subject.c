/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subject.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 11:44:41 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/25 11:44:41 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: just subject about control statements                      **** */
/*                                                                            */
/*   Usage:                                                              **** */
/* ************************************************************************** */

/********************************************************************************************************

Calculations and expression are only a part of computer programming and control statements are needed.
They specify the order in wich statements are to be executed.

So far we have coinstructed linear programs, that is, programs that execute in a straight line, one statement after another. In this chapter we will learn howe to change the control flow of a program with branching statements and looping statements cause one section of code to be executed or not executed, depending on a conditionall clause. Looping statements are used to repeat a section of code a number of times or untill some condition occurs.


you need to know if statement - else statement


#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
        s2++;
	}
	return (0);
}

int	main(void)
{
	char	s1[] = "qwerty";
	char	s2[] = "qwerty";

	printf("%d", ft_strcmp(s1, s2));
	return (0);
}

the ft_strcmp learned on 42

Table 6-2 Name Translation

fn  --> next_number
fn-1 --> current_number
fn-2 --> old_number

in code C, the equation is expressed as:
	next_number = current_number + old_number;
We want to loop until our current term is 100 or larger. The while loop:
	while ( current_number < 100 );
will repeat our computation and printing untill we reach this limit.


********************************************************************************************************/

