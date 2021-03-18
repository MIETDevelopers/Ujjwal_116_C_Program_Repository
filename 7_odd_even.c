/*NAME:UJJWAL SHARMA
PURPOSE:TO FIND THE NUMBER IS ODD OR EVEN */
#include <stdio.h>	//PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
int main() {	//STARTING THHE MAIN PROGRAM
    int num;	//DECLARING VARIABLE NAMED "num"
    scanf("%d", &num);	//READ VARIABLE
    printf("Enter an integer: %d\n", num);	//PRINT USER INPUT
    if(num % 2 == 0)	//IF-STATEMENT
        printf("Number %d is even.", num); 	//IF THE COONDITION IN IF-STATEMENT IS TRUE THEN IT PRINT THIS LINE
    else		//ELSE-STATEMENT
        printf("Number %d is odd.", num);		//IF THE COONDITION IN IF-STATEMENT IS FALSE THEN IT PRINT THIS LINE
    
    return 0;		//RETURN STATEMENT
}