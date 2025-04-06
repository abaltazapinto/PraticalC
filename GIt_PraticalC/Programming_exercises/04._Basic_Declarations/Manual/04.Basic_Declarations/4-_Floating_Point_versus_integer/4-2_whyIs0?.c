#include <stdio.h>

int	learning();
float answer;

int main()
{
	float answer;
	answer = 1/3;
	printf("The value of 1/3 is %f\n", answer);
	learning();
	return (0);
}

/******************************************************************************************************
like this i  am not getting the float answer that i needed .  To ensure to have the righ answer to this problem  i habe to a least one operand in the division is a floating point.

******************************************************************************************************/

int learning()
{
	float answer;
	answer = 1.0 / 3.0;

	printf("The value of 1/3 %.3f\n", answer);
	return 0;	
}
