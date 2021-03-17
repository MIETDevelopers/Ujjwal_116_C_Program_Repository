#include <stdio.h>
int main()
{
   int num1, num2, add, subtract, multiply;
   float divide;
 
   scanf("%d%d", &num1, &num2);
   printf("Enter two integers = %d %d\n", num1, num2);
 
   add = num1 + num2;
   subtract = num1 - num2;
   multiply = num1 * num2;
   divide = num1 / (float)num2;   //typecasting, you can also write: divide = (float)first/second

   printf("Sum = %d\n", add);
   printf("Difference = %d\n", subtract);
   printf("Multiplication = %d\n", multiply);
   printf("Division = %.2f\n", divide); // "%.2lf" to print two decimal digits, by default (%lf) we get six
 
   return 0;
}