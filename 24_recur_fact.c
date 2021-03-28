/*NAME:UJJWAL SHARMA
PURPOSE:TO DISPLAY THE FACTORIAL OF A NUMBER USING RECURSION*/
#include<stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
void output(int number);	//FUNCTION DECLARATION
int main(){					//FUNCTION INITIALIZATION
	int number;
	scanf("%d",&number);
	output(number);
	return 0;		//RETURN STATEMENT
}
void output(int number){	//FUNCTION CALLING
	int output=1;
	for(int i=1;i<=number;i++){		//FOR LOOP(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
		output=output*i;	//LOGIC
	}
	printf("Output is: %d", output);		//PRINT OUTPUT OF THE PROGRAM
}