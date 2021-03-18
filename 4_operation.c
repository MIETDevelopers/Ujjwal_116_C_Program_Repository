/*NAME:UJJWAL SHARMA
PURPOSE:ARITHMETIC OPERATIONS USING ADDITION, SUBTRACTION, MULTIPLICATION AND REMAINDER OPERATORS*/
#include <stdio.h>//PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
int main()  //STARTING OF MAIN PROGRAM
{
   int num1, num2, add, subtract, multiply;  //DECLARING THE VARIABLES NAME "num1", "num2", "add", "subtract", "multiply"
   float divide;  //AND "divide" 
 
   scanf("%d%d", &num1, &num2);  //READ "num1" AND "num2"
   printf("Enter two integers = %d %d\n", num1, num2);   //PRINT THE VALUE OF "num1" AND "num2"
 
   add = num1 + num2;   //ADDITION FORMULA
   subtract = num1 - num2; //SUBTRACTION FORMULA
   multiply = num1 * num2; //MULTIPLICATION FORMULA
   divide = num1 / (float)num2;   //DIVISION FORMULA AND TYPECATING, YOU CAN ALSO WRITE: divide = (float)num1/num2

   printf("Sum = %d\n", add);    //PRINT SUM OF TWO NUMBER
   printf("Difference = %d\n", subtract);    //PRINT SUBTRACTION OF TWO NUMBER
   printf("Multiplication = %d\n", multiply);   //PRINT MULTIPLICATION OF TWO NUMBER
   printf("Division = %.2f\n", divide); //PRINT DIVISION OF TWO NUMBER AND "%.2lf" TO PRINT TWO DECIMAL DIGITS, BY DEFAULT (%lf) WE GET SIX
 
   return 0;   //RETURN STATEMENT
}
