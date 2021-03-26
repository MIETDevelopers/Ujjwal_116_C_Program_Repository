/*NAME:UJJWAL SHARMA
PURPOSE:TO FIND THE MAXIMUM ELEMENT IN AN ARRAY */
#include<stdio.h>    //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD LIBRARY INPUT OUTPUT HEADER FILE
int main() //STARTING OF MAIN PROGRAM
{
int i; // DECLARING VARIABLES NAMED "i"
int arr[5]; // DECLARING ARRAY OF SIZE 5 WITH FLOAT DATA TYPE 
printf("Please enter five numbers: \n"); // PRINT FIVE ELEMENT OF AN ARRAY

for (i = 0; i < 5; i++) //FOR-LOOP(INITIALIZATION;CONDITION;INCREMENTATION/DECREMENTATION)
{

    scanf("%d", &arr[i]);     //READ USER INPUT
}
int max = arr[0];   //DECLARING VARIABLES NAMED "max"
int maxindex = 0;   //DECLARING VARIABLES NAMED "maxindex"
for (i = 0; i < 5; i++)     //FOR-LOOP(INITIALIZATION;CONDITION;INCREMENTATION/DECREMENTATION)
{
    if (max < arr[i]) {   //IF-STATEMENT
        max = arr[i];
        maxindex = i;
    }
}
printf("Largest element = %d\n", max);   //PRINT OUTPUT OF THE PROGRAM
printf("Largest index = %d", maxindex);

return 0;   //RETURN STATEMENT
}