/* NAME:UJJWAL SHARMA
PURPOSE:TO FIND WHETHER THE NUMBER IS PRIME OR NOTUSING WHILE LOOP */
#include <stdio.h>    //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD LIBRARY INPUT OUTPUT HEADER FILE
 
int main()  //STARTING OF MAIN PROGRAM
{  int num; //DECLARING VARIABLE NAMED "num"
 
    int i,  keynum, found = 0;  //DECLARING  VARIABLES NAMED "i", "keynum" AND "found"
 
    scanf("%d", &num);      //READ USER INPUT
    printf("Enter the number of elements =%d\n", num);  //PRINT USER INPUT
    int array[num];     //DECLARING VARIABLE NAMED "array" OF SIZE EQUALS TO "num"
    printf("Enter the elements one by one \n"); //PRINT ELEMENT OF AN ARRAY
    for (i = 0; i < num; i++)   //FOR LOOP(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
    {
        scanf("%d", &array[i]); //READ ELEMENT OF AN ARRAY
    }
 
    scanf("%d", &keynum);   //READ VARIABLE "keynum"
    printf("Enter the element to be searched = %d\n", keynum);  //PRINT ELEMENT TO BE SEARCHED
    //LINEAR SEARCH BIGINS
    for (i = 0; i < num ; i++)   //FOR LOOP(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
    {
        if (keynum == array[i] )    //IF-STATEMENT
        {
            found = 1;  //STATEMENT OF IF STATEMENT WHICH APPLIES ONLY AND ONLY IFTHE CONDITION IS TRUE
            break;  //BREAK STATEMENT
        }
    }
    if (found == 1) //IF-STATEMENT
        printf("Element is present in the array at position = %d",i+1); //PRINT OUTPUT OF THE PROGRAM
    else        //ELSE-STATEMENT
        printf("ELEMENT IS NOT PRESENT IN AN ARRAY");   //PRINT OUTPUT OF THE PROGRAM
    return 0;       //RETURN STATEMENT
}