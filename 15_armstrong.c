/* NAME:UJJWAL SHARMA
PURPOSE:TO FIND THE SUM OF DIGITS OF A NUMBER */
#include<stdio.h>    //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD LIBRARY INPUT OUTPUT HEADER FILE
int main()		//STARTING OF MAIN PROGRAM
{
	int n,r,sum=0,temp;		//DECLARING VARIABLES NAMED "n", "r", "sum" AND "temp"
	scanf("%d",&n);		//READ USER INPUT
	printf("enter the number = %d\n", n);		//PRINT USER INPUT
	temp=n;		//INITIALIZING "temp"
	while(n>0)		//WHILE LOOP IF REPEATS TILL n=0
	{		//STARTING OF MAIN BODY OF WHILE-LOOP
		r=n%10;
		sum=sum+(r*r*r);	//FORMULA TO FIND WHETHER A NUMBER IS ARMSTRONG 
		n=n/10;
	}
	if(temp==sum)	//IF-STATEMENT
		printf("%d is Armstrong number ", temp);	//PRINT IF NUMBER IS ARMSTRONG NUMBER
	else			//ELSSE-STATEMENT
		printf("%d is not a Armstrong number", 	temp);	//PRINT IF NUMBER IS NOT A ARMSTRONG NUMBER
	return 0;		//RETURN STATEMENT
}



//DOUBT : SIR, PLEASE EXPLAIN FROM LINE NO. 10 TO LINE NO. 19