#include <stdio.h>

// exercicio fazer a area e o perimetro de um rectangulo

int	main()
{
	float	width;
	float	height;
	float	perimeter;
	float	area;	


	puts("what is the witdh of your rectangle?");
	scanf("%f", &width);
	puts("what is the height of your rectangle");
	scanf("%f", &height);

	perimeter = 2 * (width + height);
	
	area = width*height;

	printf("The perimeter of your rectangle is %.2f\nTHe area of the rectangle is %.2f", perimeter,area);

	return 0;
}
