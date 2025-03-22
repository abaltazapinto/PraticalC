/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   module_ex2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 14:16:06 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/22 14:16:06 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: iI will do the strcpy                                      **** */
/*                                                                            */
/*   Usage:                                                              **** */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_strcpy(char *dest,char *src)
{
//	int i = 0;

	while(*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = '\0'; 
}

int	main()
{
	char name[30];
	ft_strcpy(name, "Andre");
	printf("The name is %s", name);
	return (0);
}



