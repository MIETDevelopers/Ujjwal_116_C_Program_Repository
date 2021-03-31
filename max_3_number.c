/*NAME:UJJWAL SHARMA
PURPOSE:TO FIND THE MAXIMUM OF 3 NUMBER*/
#include <stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
int main(){    //STARTING OF MAIN PROGRAM
	int num, max=0; 	//DECLARING VARIABLES
    for(int i=0; i<3; i++)	 //FOR LOOP(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
    {
    	scanf("%d", &num);		//READ USER INPUT
		printf("Enter %d numbers: %d\n", i+1, num);	//PRINT USER INPUT
		if(num > max)		//IF STATEMENT
			max = num;
	}
 	printf("The largest number is: %d", max);   //PRINT TH OUTPUT OF THE PROGRAM
	return 0;    //RETURN STATEMENT
}