/*NAME:UJJWAL SHARMA
PURPOSE:ARRAY OF STRUCTURES FOR STUDENTS MARKS FOR EACH STUDENT AND PASSING IT TO FUNCTION FOR VARIOUS OPERATION*/
#include <stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
#include <string.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STRING HEADER FILE
 
struct student {        //STURUCTURE KEYWORD OF DATA TYPE "sttudent"
     int id;            //"id" VARIABLE OF "int" DATA TYPE
     char name[30];     //"name" VARIABLE OF "char" DATA TYPE
     float percentage;  //"percentage" VARIABLE OF "float" DATA TYPE
};
 
int main() {
     int i;
     struct student record[3];
 
     // 1ST STUDENT'S RECORD
     record[0].id=1;
     strcpy(record[0].name, "ASHUTOSH");
     record[0].percentage = 99.0;
 
     // 2ND STUDENT'S RECORD         
     record[1].id=2;
     strcpy(record[1].name, "LOVISH");
     record[1].percentage = 99.1;
 
     // 3RD STUDENT'S RECORD
     record[2].id=3;
     strcpy(record[2].name, "DEEPAK");
     record[2].percentage = 99.2;
 
     for(i=0; i<3; i++){
         printf(" Records of STUDENT : %d \n", i+1);
         printf(" Id is: %d \n", record[i].id);
         printf(" Name is: %s \n", record[i].name);
         printf(" Percentage is: %f\n\n",record[i].percentage);
     }
     return 0;      //RETURN STATEMENT
}
