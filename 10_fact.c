/*NAME:UJJWAL SHARMA
PURPOSE:TO FIND THE FACTORIAL OF A NUMBER USING FOR LOOP*/
#include<stdio.h>//PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD LIBRARY INPUT OUTPUT HEADER FILE
int main(){		//STARTING OF MAIN PROGRAM
	int num, fact=1, i;		//DECLARING VARIABLES NAMED "num", "fact", AND "i"
	scanf("%d",&num);		//READ THE USER INPUT
	printf("Enter a number = %d",num);		//PRINT THE INPUT
	for (i=num;i>=1;i--){		//STARTING FOR LOOP
		fact = fact*i;
	}
	printf("\nFactorial of a number %d is = %d", num, fact);	//PRINT THE FACTORIAL OF A NUMBER
	return 0;	//RETURN STATEMENT
}
