/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exercise5-5_full1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 16:35:07 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/22 16:35:07 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: Ask the user first and last name and concatenate both of them   */
/*                                                                            */
/*   Usage:                                                              **** */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strcpy(char *dst, char *src)
{
	while(*src)
	{
		*dst = *src;
		dst++;
		src++;
	}	
	*dst = '\0';
	return (*dst);
}

char	ft_strcat(char *dst, char *src)
{
	while(*dst)
	{
		dst++;
	}
	while(*src)
	{
 		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (*dst);
}

int	main()
{
	char	first[100];
	char	last[100];
	char	full[200];

	puts("Enter the first name");
	fgets(first, sizeof(first), stdin);

	puts("Enter the last name");
	fgets(last, sizeof(last), stdin);
	

	ft_strcpy(full, first);
	ft_strcat(full, " ");
	ft_strcat(full, last);

	printf("The name is %s\n", full);

}
