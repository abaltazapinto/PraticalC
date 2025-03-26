/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grade_values.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 10:18:42 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/26 10:18:42 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: Given a numeric grade, print the letter                         */
/*                                                                            */
/*   Usage:                                                              **** */
/* ************************************************************************** */

#include <stdio.h>

char	line[50];
int	grade;
int	total = 0;

int	main()
{
	while (1)
	{
		puts("Enter a int (classification of the test) to add \n");
		puts("    or 0 to stop\n");

		if (fgets(line, sizeof(line), stdin) == NULL)
		{
			puts("\n Error reading input. Exiting \n");
			break;
		}

		if (sscanf(line, "%d", &grade) != 1)
		{
			printf("Invalid input. Please enter a number.\n");
			continue;
		}

		if (grade == 0)
			break;

		(grade > 0 && grade <= 60) ? puts("\tGrade: F\n") :
 		(grade > 60 && grade <= 70) ? puts("\tGrade: D\n") :
 		(grade > 70 && grade <= 80) ? puts("\tGrade: C\n") :
 		(grade > 80 && grade <= 90) ? puts("\tGrade: B\n") :
 		(grade > 90 && grade <= 100) ? puts("\tGrade: A\n") : 0;
		 

		
		total++;
		printf("\tGrade %d: :%d\n\n", total, grade); 

	}	

	printf("It were evaluated %d exams.", total);
	return (0);
}
