/*NAME:UJJWAL SHARMA
PURPOSE:TO FIND THE EUCLIDEAN DISTANCE BETWEEN TWO POINTS IN A PLANE */
#include<stdio.h>   //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
/*
STRUCTURE IS DEFINED ABOVE ALL FUNCTIONS SO IT IS GLOBAL.
*/

struct student
{
    char name[20];
    int roll_no;
    int marks;
};

void print_struct(char name[], int roll_no, int marks);  //DECLARATIION OF VARIABLES

int main()   //STARTING OF MAIN PROGRAM
{
    struct student stu = {"Tim", 1, 78};  
    print_struct(stu.name, stu.roll_no, stu.marks);
    return 0;  //RETURN STATEMENT
}

void print_struct(char name[], int roll_no, int marks)
{
    printf("Name: %s\n", name);   //printf() FUNCTION CALLING
    printf("Roll no: %d\n", roll_no);
    printf("Marks: %d\n", marks);
    printf("\n");
}