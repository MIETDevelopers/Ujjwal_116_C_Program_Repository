/*NAME:UJJWAL SHARMA
PURPOSE:TO DEMONSRATE THR FUNCTION IMPLEMENTATION RETURNS A POINTER*/
#include<stdio.h>   //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
void binarySearch(); 
int arr[50], n, num, start, mid, end; //DECLARATION OF VARIABLES OF "int" DATA TYPE
void main()
{
    //printf() AND scanf() FUNCTION CALLING TO TAKE INPUT FOR SIZE OF AN ARRAY
    scanf("%d", &n);
    printf("\nEnter the number of elements: %d\n", n);
    //FOR LOOP TO TAKE n INPUTS
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);   //READ USER INPUT
        printf("\nEnter %d elements: %d\n", i+1, arr[i]);
    }
    scanf("%d", &num); //FOR READING THE NUMBERTO BE SEARCHED
    printf("Enter the number to be searched: %d\n", num);
    binarySearch();
}
void binarySearch()
{
    //FOR FINDING THE ENTERED NUMBER IN THE ARRAY
    start = 0;
    end = n-1;
    mid = (start + end)/2;
    while ((start<=end) && (arr[mid]!=num))    //WHILE LOOP
    {
        if (num < arr[mid])     //IF-STATEMENT
            end = mid - 1;
        else    //ELSE-STATEMENT
            start = mid + 1;
        mid = (start + end) / 2;
    }
    if (arr[mid] == num)    //IF-STATEMENT
        printf("\nNumber %d found at index [%d] in the array!", num, mid+1); //FOR PRINTING THE LOCATION OF THE SEARCHED NUMBER
    else        //ELSE-STATEMENT
        printf("\nNumber doesn't exist!"); 
}
