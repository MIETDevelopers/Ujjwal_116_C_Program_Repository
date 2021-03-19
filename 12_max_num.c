/*NAME:UJJWAL SHARMA
PURPOSE:TO DISPLAY THE MAXIMUM OF n NUMBERS */
#include<stdio.h>    //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD LIBRARY INPUT OUTPUT HEADER FILE
int main(){   //STARTING OF MAIN PROGRAM
  int n,num,i;  /*DECLARING THE VARIABLES NAMED "n", "num", "i" AND "max" */
  int max;
  
  scanf("%d",&n);   //READ VARIABLE "n"
  printf("Enter the values of n: %d\n", n); //PRINT VALUE OF "n"
 
  scanf("%d",&max);   //READ VARIABLE "max"
  printf("Number %d: %d\n", 1, max);  //PRINT NUMBER 1:

  for(i=2;i<=n;i++){    //STARTING OF FOR-LOOP BLOCK OF CODE
    scanf("%d",&num);   //READ VARIABLE "num"
    printf("Number %d: %d\n", i, num);  //PRINT THE VALUE OF NUM

    if(max<num)   //IF-STATEMENT
      max=num;    //THIS CONDITION IS APPLIED IF AND ONLY IF IF-STATEMENT IS TRUE
  }
  
  printf("Maximum number is: %d",max);    //PRINT MAXIMUM OF Nn NUMBER

  return 0;   //RETURN STATEMENT
}



//DOUBT : SIR, PLEASE EXPALAIN THE FOR LOOP BLOCK OF CODE.....!!!!!!!