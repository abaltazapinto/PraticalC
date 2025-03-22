/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exercise5-6_full2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 17:06:10 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/22 17:06:10 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: the length of the string is the index of the end-of-string      */
/*                                                                            */
/*   Usage:                                                              **** */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char first[100];
char last[100];
char full[100];

int	main()
{
	puts("Enter the first name");
	fgets(first, sizeof(first), stdin);

	// trim off las char
	first[strcspn(first, "\n")] = '\0'; // Remove on new line
	puts("Enter your last name");
	fgets(last, sizeof(last),stdin);
	last[strcspn(last, "\n")] = '\0';

	strcpy(full, first);
	strcat(full, " ");
	strcat(full, last);

	printf("The name is %s\n", full);
	return (0);
}
