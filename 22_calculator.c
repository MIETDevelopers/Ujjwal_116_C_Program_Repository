/*NAME:UJJWAL SHARMA
PURPOSE:TO MAKE A SIMPLE CALCULATOR*/
#include <stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
 
int main() //STARTING OF MAIN PROGRAM 
{
    int num1,num2; //DECLARING VARIABLES
    float result;  
    char var;         
    scanf("%d",&num1);  //READ USER INPUT
    printf("Enter first number: %d\n", num1);   //PRINT USER INPUT 
    scanf("%d",&num2);      //READ USER INPUT
    printf("Enter second number: %d\n", num2);   //PRINT USER INPUT
     
    scanf(" %c",&var);      //READ USER INPUT
    printf("Choose operation to perform (+,-,*,/,%): %c\n", var); //PRINT USER INPUT 
     
    result=0; //NULL VALUE PROVIDED 
    switch(var)     //SWITCH STATEMENT 
    {
        case '+':       //1ST CASE
            result=num1+num2; //FORMULA FOR '+' OPERATOR 
            break; // BREAK STATEMANT 
             
        case '-':    //2ND CASE
            result=num1-num2;   //FORMULA FOR '-' OPERATOR
            break;   // BREAK STATEMENT 
         
        case '*':   //CASE 3RD
            result=num1*num2;   //FORMULA FOR '*'OPERATOR
            break;  //BREAK STATEMENT
             
        case '/': //4TH CASE
            result=(float)num1/(float)num2;     //FORMULA FOR '/' OPERATOR
            break;      //BREAK STATEMENT
             
        case '%':   //5TH CASE
            result=num1%num2; //FORMULA FOR '%' OPERATOR 
            break; //BREAK STATEMENT
        default:   //DEFAULT STATEMENT
            printf("Invalid operation.\n");
    }
 
    printf("Result: %d %c %d = %f\n",num1,var,num2,result); //PRINT OUTPUT OF THE PROGRAM
    return 0; //RETURN STATEMENT
}