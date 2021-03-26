/*NAME:UJJWAL SHARMA
PURPOSE:TO FIND THE MAXIMUM ELEMENT IN AN ARRAY */
#include <stdio.h>    //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD LIBRARY INPUT OUTPUT HEADER FILE
int main()  //STATRING OF MAIN PROGRAM
{
    int n, i, j, temp;  //DECLARING VARIABLES NAMED "n", "i", "j" AND "temp"
    int arr[64];     //DECLARING VARIABLE NAMED "arr" OF SIXE 64
 
    scanf("%d", &n);       //READ USER INPUT
    printf("Enter number of elements = %d\n", n);   //PRINT USER INPUT
 
    printf("Enter %d integers\n", n);   //PRINT USER INPUT
    for (i = 0; i < n; i++) //FOR LOOP(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
    {
        scanf("%d", &arr[i]);   //READ NUMBER OF ELEMENT
    }
    for (i = 1 ; i <= n - 1; i++)//FOR LOOP(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
    {
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j])     //WHILE LOOP
            {	        
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
    }
    printf("Sorted list in ascending order:\n");    //PRINT OUTPUT OOF THE PROGRAM
    for (i = 0; i <= n - 1; i++)    //FOR LOOP(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
    {
        printf("%d\n", arr[i]); //PRINT ARRAY
    }
    return 0;       //RETURN STATEMENT
}