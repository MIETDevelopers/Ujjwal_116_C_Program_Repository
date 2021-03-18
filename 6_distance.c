/*NAME:UJJWAL SHARMA
PURPOSE:TO FIND THE EUCLIDEAN DISTANCE BETWEEN TWO POINTS IN A PLANE */
#include<stdio.h>	//PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
#include<math.h>	//PREPROSESSIVE DIRECTIVE TO INCLUDE MATH LIBRARY HEADER FILE

int main()	//STARTING OF MAIN PROGRAM
{
    float x1, y1, x2, y2, distance;		/* DECLARING VARIABLES NAMED "x1", "x2", "y1",
    "y2" AND "distance" */
    scanf("%f%f", &x1, &y1);	//READ VARIABLE NAMED "x1", "y1"
    printf("Enter point 1 (x1, y1) = (%.2f,%.2f)\n", x1, y1);	//PRINT USER INPUT

    scanf("%f%f", &x2, &y2);	//READ VARIABLE NAMED "x2", "y2"
    printf("Enter point 2 (x2, y2) = (%.2f,%.2f)\n", x2, y2);	//PRINT USER INPUT

    distance = sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) );	//DISTANCE FORMULA USING sqrt() FUNCTION

    printf("Distance between (%0.2f, %0.2f) and (%0.2f, %0.2f) is %0.2f\n", x1, y1, x2, y2, distance);		//PRINT OUTPUT

    return 0;	//RETURN STATEMENT
}