/*NAME:UJJWAL SHARMA
PURPOSE:TO DISPLAY THE FACTORIAL OF A NUMBER USING RECURSION*/
#include <stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
void swap(int n1, int n2);	//SWAP FUNCTION CALLING
int main(){		//STARTING OF MAIN PROGRAM
    int num1 = 5, num2 = 10;	//DECLARING VARIABLES
    swap(num1, num2);	//SWAP FUNCTION INITIALIZE
    printf("num1=%d, ", num1);	//PRINTING num1
    printf("num2=%d", num2);	//PRINTING num2
    return 0;		//RETURN STATEMENT
}
void swap(int n1, int n2){		//FUNCTION DEFINITION
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}