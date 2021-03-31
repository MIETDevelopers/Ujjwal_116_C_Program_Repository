/*NAME:UJJWAL SHARMA
PURPOSE:TO DEMONSRATE THR FUNCTION IMPLEMENTATION RETURNS A POINTER*/
#include<stdio.h>   //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
 
// FUNCTION THAT RETURNS POINTER
int* fun()
{
    // DECLARE A STATIC INTEGER
    static int A = 10;
    return (&A);
}
 
// DRIVER CODE
int main()
{
    // DECLARE A POINTER
    int* p;
 
    // FUNCTION CALLING
    p = fun();
 
    // PRINT ADDRESS
    printf("%p\n", p);
 
    // PRINT VALUE AT THE ABOVE ADDRESS
    printf("%d\n", *p);
    return 0;       //RETURN STATEMENT
}
