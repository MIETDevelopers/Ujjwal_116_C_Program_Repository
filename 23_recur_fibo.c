/*NAME:UJJWAL SHARMA
PURPOSE:TO DISPLAY THE FIBONACCI SERIES USING RECURSION*/
#include<stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
void printFibonacci(int n){    //FUNCTION DECLARATION
    static int n1=0,n2=1,n3;    //FUNCTION INITIALIZATION
    if(n>0){
         n3 = n1 + n2;
         n1 = n2;
         n2 = n3;
         printf("%d ",n3);
         printFibonacci(n-1);
    }
}
int main(){ //STARTING OF MAIN PROGRAM
    int n;      //DECLARATION OF VARIABLES
    scanf("%d",&n);     //READ USER INPUT
    printf("Enter the number of elements: %d\n", n);    //PRINT USER INPUT
    printf("Fibonacci Series: ");   //PRINT OUTPUT OF THE PROGRAM
    printf("%d %d ",0,1);   //PRINT OUTPUT OF THE PROGRAM
    printFibonacci(n-2);    //FUNCTION CALLING
  return 0;     //RETURN STATEMENT
 }