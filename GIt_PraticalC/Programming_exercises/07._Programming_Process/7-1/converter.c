/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 12:25:29 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/27 12:25:29 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: This program is to convert english units to metric              */
/*   Resticitons:                                                             */
/*                 You can use float numbers                                  */
/*   Usage:                                                              **** */
/* ************************************************************************** */
/********************************************************************************************************
	I need to convert all of kind of units from english units to metric	

	Restrictions --> Depending on the unit the entry point can be float or int

	Here you have to insert the desired  english unit to be converted, and the desired metric unit
	> Then read the inputs
		> they are 4 inputs, the value > english unit > dummy text ("to") > metric unit
	> With this all 4 i can convert everything that is anounced at the beginning of the problem

	> Future arrangments: Inlude a while(1) loop and make to exit the 0 and ask in looping the 
	conversion 

********************************************************************************************************/


#include <stdio.h>
#include <string.h>

float	inch_to_centimeters(int inch)
{
	int centimeter;
	centimeter = inch * 2.54;
	return 	centimeter;
}

float	foot_to_meter(int foot)
{
	int meters;
	meters = 0.3048*foot;
	return meters;
}

float	miles_to_km(float miles)
{
	int km;
	km = 0.6213712 * miles;
	return km;
}

float	ounces_to_ml(float ounces)
{
	float ml;
	ml = ounces * 29.5735f;
	return ml;
}

float pt_to_ml(float pints)
{
	float ml;
	ml = pints * 473.176f;
	return ml;
}

float sqft_to_sqm(float sqft)
{
	float sqm;
	sqm = sqft * 0.92903f;
	return sqm;
}

float acre_to_sqm(float acres)
{
	float sqm;
	sqm = acres * 4086.86f;
	return sqm;
}

float	fahreneit_to_celsius(float fahrenheit)
{
	float celsius;
	celsius = (fahrenheit -32) * 5/9;
	return celsius;
}

int ft_strcmp(char *src, char *dest)
{
	while(*src && (*src == *dest))
	{
		src++;
		dest++;
	}
	return *(unsigned char *)src - *(unsigned char *)dest;	
}

int	main()
{
	char line[256];
	float	amount;
	char convert_from[50];
	char dummy[10];
	char convert_to[50];
	
 puts("Please provide the value with decimal cases and the inherent english unit, and the desired metric unit:\n\t You can convert: \n\t>>>> Length <<<<\n feet to meters \t|\t Mile to km  \n\n\t>>>> Weitgth <<<<\n 0unce to ml \t|\t Pint (pt) to mililiters\n\t>>>> Area <<<<\n Squarefoot(sqft) to Square meters(m2) \t|\t Acre to square meters (m2)\n\n\t>>>> Temperature <<<<\n Fahrenheit(F) to Celsius(C)\n\n '");

	if(!fgets(line, sizeof(line), stdin))
	{
		printf("Error reading input\n");
		return -1;
	};

	int parsed = sscanf(line, "%f %s %s %s", &amount, convert_from, dummy, convert_to);

	if(parsed != 4)
	{
		printf("Invalid input format\n");
		return -1;
	}

	if (ft_strcmp(dummy, "to") != 0)
	{
		printf("Expected 'to' between units \n");
		return -1;
	}	
  	printf("%.2f %s %s %s \n\t Checking the input\n\n", amount, convert_from, dummy, convert_to);

	
	if((ft_strcmp(convert_from, "foot") == 0) && ((ft_strcmp(convert_to, "meters") == 0) || (ft_strcmp(convert_to, "m") == 0)))
	{
		printf("The value of %.2f foot in meters is: %0.2f meters", amount,foot_to_meter(amount));
	}
	else if(((ft_strcmp(convert_from, "inch") == 0) || (ft_strcmp(convert_from, "in") == 0)) && ((ft_strcmp(convert_to, "centimeters") == 0) || (ft_strcmp(convert_to, "cm") == 0)))
    	{
        	printf("The value of %.2f inches in centimeters is: %f meters", amount,foot_to_meter(amount));
    	}
	else if(((ft_strcmp(convert_from, "miles") == 0) || (ft_strcmp(convert_from, "mi") == 0)) && ((ft_strcmp(convert_to, "kiometers") == 0) || (ft_strcmp(convert_to, "km") == 0)))
        {
                printf("The value of %.2f miles in kilometers is: %.2f kilometers", amount, miles_to_km(amount));
        }
        else if(((ft_strcmp(convert_from, "ounces") == 0) || (ft_strcmp(convert_from, "oz") == 0)) && ((ft_strcmp(convert_to, "mililiters") == 0) || (ft_strcmp(convert_to, "ml") == 0)))
        {
                printf("The value of %.2f ounces in mililiters is: %.2f mililiters", amount, ounces_to_ml(amount));
        }
        else if(((ft_strcmp(convert_from, "pints") == 0) || (ft_strcmp(convert_from, "pt") == 0)) && ((ft_strcmp(convert_to, "milileters") == 0) || (ft_strcmp(convert_to, "ml") == 0)))
        {
                printf("The value of %.2f ints in mililiters is: %.2f mililiters", amount,foot_to_meter(amount));
        }
        else if(((ft_strcmp(convert_from, "square feet") == 0) || (ft_strcmp(convert_from, "sqft") == 0)) && ((ft_strcmp(convert_to, "square meters") == 0) || (ft_strcmp(convert_to, "m^2") == 0)))
        {
                printf("The value of %.2f square feet in square meters is: %.2f square meters", amount, sqft_to_sqm(amount));
        }
        else if(((ft_strcmp(convert_from, "acre") == 0)) && ((ft_strcmp(convert_to, "square meters") == 0) || (ft_strcmp(convert_to, "m^2") == 0)))
        {
                printf("The value of %.2f acres in  square meters is: %.2f square meters", amount,foot_to_meter(amount));
        }
        else if(((ft_strcmp(convert_from, "farenheit") == 0) || (ft_strcmp(convert_from, "F") == 0)) && ((ft_strcmp(convert_to, "Celsius") == 0) || (ft_strcmp(convert_to, "C") == 0)))
        {
                printf("The value of %.2f farenheit in celsius is: %.2f C", amount,foot_to_meter(amount));
        }
    	else
	{
       		printf("Conversion from %s to %s is not supported", convert_from, convert_to);
    	}

	return 0;
}
