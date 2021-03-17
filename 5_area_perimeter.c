#include <stdio.h>

int main()
{
	float radiusofcircle, sideofsquare, lengthofrectangle, bredthofrectangle;
	scanf("%f %f %f %f", &radiusofcircle, &sideofsquare, &lengthofrectangle, &bredthofrectangle);
	printf("\nArea of Circle =%f ",3.14*radiusofcircle*radiusofcircle);
	printf("\nPerimeter of Circle =%f ",2*3.14*radiusofcircle);
	printf("\nArea of Square = %f",sideofsquare*sideofsquare);
	printf("\nPerimeter of Square =%f",4*sideofsquare);
	printf("\nArea of Rectangle =%f",lengthofrectangle*bredthofrectangle);
	printf("\nPerimeter of Rectangle =%f",2*(lengthofrectangle+bredthofrectangle));
	return 0;
}