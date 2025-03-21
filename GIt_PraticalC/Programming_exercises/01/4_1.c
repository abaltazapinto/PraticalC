/******************************************************************************************************
write a program to print your name , social security number and date of birth
******************************************************************************************************/

#include <stdio.h>

int	main()
{
	char name[50];
	int social_number;
	char birth_date[20];

	puts("Enter your name\n");
	fgets(name,sizeof(name), stdin);
	puts("Enter your social number \n");
	scanf("%d", &social_number);

	//clear the input 
	while (getchar() != '\n' );

	puts("Enter your date of birth (DD/MM/YYYY):");
	fgets(birth_date, sizeof(birth_date), stdin);
	
	printf("Hello, %s.\nYour social security number is %d\nYour date of birth is the %s.",name, social_number, birth_date); 
	return 0;
}
