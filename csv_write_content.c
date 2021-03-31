/*NAME:UJJWAL SHARMA
PURPOSE:TO WRITE CONTENT IN CSV FILE*/
#include <stdio.h> //INCLUDING STANDARD INPUT OUTPUT HEADER FILE
#include <stdlib.h>//INDLUDING STANDARD LIBRARY HEADER FILE
#include <string.h>//INCLUDING STRING HEADER FILE 
int main() 
{ 
    FILE* fp = fopen("C:\\Users\\ujjwal\\Desktop\\C_Repositories\\Ujjwal_116_C_Program_Repository\\csv_write_content.csv", "a+"); //FILE PATH

    char name[50]; 
    int rollno, marks; 

    if (!fp) { 
        // ERROR IN FILE OPENING 
        printf("Can't open file\n"); 
        return 0; 
    }
    // ASKING USER INPUT FOR THE NEW RECORD TO BE ADDED.   
    scanf("%s", &name); 
    printf("\nEnter Student Name = %s\n", name); 
    scanf("%d", &rollno); 
    printf("\nEnter Roll Number = %d\n", rollno); 
    scanf("%d", &marks); 
    printf("\nEnter Attendance = %d\n", marks); 

    // SAVING DATA IN FILE
    fprintf(fp, "%s, %d, %d\n", name, 
            rollno, marks); 

    printf("\nNew student deatils added."); 

    fclose(fp); 
    return 0;       //RETURN STATEMENT
}