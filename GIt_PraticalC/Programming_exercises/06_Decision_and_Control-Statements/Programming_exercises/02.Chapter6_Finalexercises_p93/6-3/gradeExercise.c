/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gradeExercise.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza     abaltaza42@outlook.com        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 11:03:50 by abaltaza          #+#    #+#             */
/*   Updated: 2025/03/26 11:03:50 by abaltaza         ###   ########.fr       */
/*                                                                            */
/*   Purpose: Modifying the previous exercise with new requirements      **** */
/*                                                                            */
/*   Usage: now we need to add + or  minus afdter the grade              **** */
/* ************************************************************************** */

#include <stdio.h>

char	line[50];
int	grade;
int	total = 0;
char	modifier;

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
		
		modifier = (grade % 10 <= 3) ? '-' : (grade % 10 >= 7) ? '+' : ' ';
		
		(grade > 0 && grade <= 60) ? printf("\tGrade: F\n") :
 		(grade > 60 && grade <= 70) ? printf("\tGrade: D%s\n\n", &modifier) :
 		(grade > 70 && grade <= 80) ? printf("\tGrade: C%s\n\n", &modifier) :
 		(grade > 80 && grade <= 90) ? printf("\tGrade: B%s\n\n", &modifier) :
 		(grade > 90 && grade <= 100) ? printf("\tGrade: A%s\n\n", &modifier) : 0;
		 		
		total++;
		//printf("\tGrade %d: :%d\n\n", total, grade); 

	}	

	printf("It were evaluated %d exams.", total);
	return (0);
}

