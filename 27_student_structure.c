/*NAME:UJJWAL SHARMA
PURPOSE:TO STORE THE STUDENT INFORMATION USING STRUCTURE*/
#include <stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
struct student {    //STRUCTURE KEYWORD NAMED "struct" WITH DATA TYPE "student"
    char firstName[50]; //"firstName" VARIABLE WITH "char" DATA TYPE
    int roll; //"roll" VARIABLE WITH "int" DATA TYPE
    float marks; //"marks" VARIABLE WITH "float" DATA TYPE
} s[10];    //STRUCTURE VARIABLE

int main() {        //STARTING OF MAIN PROGRAM
    int i;  //DECLARING VARIABLE 
    printf("Enter information of students:\n");     //PRINTING THE LINE "Enter information of student:"

    // STORING INFORMING
    for (i = 0; i < 5; ++i) {       //FOR LOOP(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
        s[i].roll = i + 1;  //LOGIC TO STORE ROLL NOO OF THE STUDENT
        printf("\nFor roll number%d,\n", s[i].roll);    //PRINTING ROLL NO OF THE STUDENT
        scanf("%s", s[i].firstName);        //READ USER INPUT
        printf("Enter first name: %s\n", s[i].firstName);   //PRINT USER INPUT
        scanf("%f", &s[i].marks);       //READ USER INPUT
        printf("Enter marks: %f\n", s[i].marks);    //PRINT USER INPUT
    }
    printf("Displaying Information:\n\n");  //PRINTING THE LINE "Displaying Information"

    // DISPLAYING INFORMATION
    for (i = 0; i < 5; ++i) {       //FOR LOOP(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
        printf("\nRoll number: %d\n", i + 1);   //PRINTING ROLL NO OF THE STUDENT
        printf("First name: ");   //PRINTING FIRST NAME OF THE STUDENT
        puts(s[i].firstName);   //FUNCTION HELPS TO PRINT THE STRING VALUE
        printf("Marks: %.1f", s[i].marks);   //PRINTING MARKS OF THE STUDENT
        printf("\n");   //COMMAND FOR NEW LINE
    }
    return 0;       //RETURN STATEMENT
}