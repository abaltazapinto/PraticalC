/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   excersise5-2-sphere.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:43:07 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/25 09:43:07 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose:Calculate the volume of a sphere                            **** */
/*                                                                            */
/*   Usage:                                                              **** */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	main()
{
	int r;
	double volume_esfera;
	double pi = M_PI;
	puts("Calculando o volume de uma esfera\n");
	puts("Qual o raio da sua esfera?\n");
	scanf("%d", &r);	
	volume_esfera = (4.0/3.0) *pi * pow(r,3);

	printf("O volume da esfera e: %.2f", volume_esfera);

	return (0);
}
