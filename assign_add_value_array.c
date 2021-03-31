/*NAME:UJJWAL SHARMA
PURPOSE:TO DEMONSTRATE THE SUM OF ELEMENT OF AN ARRAY WITH 10 INTEGER VALUE */
#include <stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
int main()		//STARTING OF MAIN PROGRAM
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, sum=0;

    for(i=0; i<10; i++)
    {
        sum += a[i];
    }

    printf("Sum of all elements stored in the array is : %d\n\n", sum);
    return 0;		//RETURN STATEMENT
}