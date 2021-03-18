/*NAME:UJJWAL SHARMA
PURPOSE:TO FIND THE AREA AND PERIMETER OF CIRCLE, SQUARE AND RECTANGLE*/
#include <stdio.h>	//PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE

int main()	//STARTING OF MAIN PROGRAM
{
	float radiusofcircle, sideofsquare, lengthofrectangle, bredthofrectangle;	/*DECLARING
	VARIABLES NAMED "radiusofcircle", "sideofsquare", "lengthofrectangle", "bredthofrectangle" */
	scanf("%f %f %f %f", &radiusofcircle, &sideofsquare, &lengthofrectangle, &bredthofrectangle);
	/* READ radiusofcircle, sideofsquare, lengthofractangle, bredthofrectangle */
	printf("\nArea of Circle =%f ",3.14*radiusofcircle*radiusofcircle);	//PRINT AREA OF CIRCLE
	printf("\nPerimeter of Circle =%f ",2*3.14*radiusofcircle);	//PRINT PERIMETER OF CIRCLE
	printf("\nArea of Square = %f",sideofsquare*sideofsquare);	//PRINT AREA OF SQUARE
	printf("\nPerimeter of Square =%f",4*sideofsquare);	//PRINT PERIMETER OF SQUARE
	printf("\nArea of Rectangle =%f",lengthofrectangle*bredthofrectangle);	//PRINT AREA OF RECTANGLE
	printf("\nPerimeter of Rectangle =%f",2*(lengthofrectangle+bredthofrectangle));	//PRINT PERIMETER OF RECTANGLE
	return 0;	//RETURN STATEMENT
}
