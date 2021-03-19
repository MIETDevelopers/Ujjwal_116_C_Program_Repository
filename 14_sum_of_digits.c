/* NAME:UJJWAL SHARMA
PURPOSE:TO FIND THE SUM OF DIGITS OF A NUMBER */
#include <stdio.h>    //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD LIBRARY INPUT OUTPUT HEADER FILE

int main()  //STARTING OF MAIN PROGRAM
{
    int num, sum=0;     //DECLARING VARIABLES NAMED "num" AND "sum"
    scanf("%d", &num);  //READ USER INPUT
    printf("Enter any number to find sum of its digit: %d\n", num);   //PRINT USER INPUT

    while(num!=0)   //WHILE-LOOP REPEAT TILL "num" BECOMES 0
    {
        sum += num % 10;       //FINDS LAST DIGIT OF "num" AND ADD TO SUM

        num = num / 10;        //REMOVES LAST DIGIT FROM "num"
    }
    printf("Sum of digits = %d", sum);  //PRINT SUM OF DIGITS
    return 0;       //RETURN STATEMENT
}


//DOUBT : SIR, PLEASE EXPLAIN ME FROM LINE NO. 11 TO LINE NO. 16