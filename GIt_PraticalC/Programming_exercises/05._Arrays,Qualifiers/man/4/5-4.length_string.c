/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5-4.length_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 16:17:59 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/22 16:17:59 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: General purpose of reading a line from the keyboard and report  */
/*                                                                     length */
/*   Usage:                                                              **** */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		i++;			
	}
	return (i);
}

int	main()
{
	char line[10];

	puts("Enter a line");
	fgets(line, sizeof(line), stdin);

	printf("The length  of the line is: %d\n", ft_strlen(line));
	return (0);
}
