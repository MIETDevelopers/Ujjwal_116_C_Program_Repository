/* NAME:UJJWAL SHARMA
PURPOSE:TO FIND WHETHER THE NUMBER IS PRIME OR NOTUSING WHILE LOOP */
#include <stdio.h>    //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD LIBRARY INPUT OUTPUT HEADER FILE
int main()      //STARTING OF MAIN PROGRAM
{
   int n, i, count = 0;     //DECLARING THE VARIABLES NAMED "n", "i", "count"
 
    scanf("%d",&n);     //READ USER INPUT
    printf("Enter number to check prime number or not = %d\n", n);    //PRINT USER INPUT
    i=2;    //INITIALIZE VALUE OF "i"
    while( i<=n/2)  //WHILE-LOOP
    {
        if(n%i==0)  //CHECK FOR NON PRIME NUMBER
        {
            count=1;    /*IF-STATEMENT
            DOUBT : SIR, WHAT IS THE MEANING OF count=1*/
            break;  //BREAK-STATEMENT
        }
        i++;    //INCREMENTATION OF "i"
    }
 
    if (count==0)   /*IF-STATEMENT
        DOUBT : SIR, EHAT IS THE MEANING OF count=0*/
        printf("%d is a prime number.",n);      //PRINT IF THE NUMBER IS PRIME
    else    //ELSE-STATEMENT
        printf("%d is not a prime number.",n);      //PRINT IF THE NUMBER IS NOT PRIME
 
    return 0;       //RETURN STATEMENT
}