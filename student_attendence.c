/*NAME:UJJWAL SHARMA
PURPOSE:TO FIND THE EUCLIDEAN DISTANCE BETWEEN TWO POINTS IN A PLANE */
#include<stdio.h>   //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
int main() {    //STARTING OF MAIN PROGRAM
    printf("The mimimum attendance for giving the examination is 75 percent. \n");  //printf() FUNCTION CALLIN
    printf("enter details to check eligibility:\n");  //printf() FUNCTION CALLING
    float a, b;   //DECLARATION OF VARIABLES
    int Rollno;
    scanf("%d",&Rollno);    //READ USER INPUT
    printf("Enter your Roll number = %d\n", Rollno);    //PRINT USER INPUT
    scanf("%f", &a);        //READ USER INPUT
    printf("enter the total no. of classes held. = %f\n", a);   //PRINT USER INPUT
    scanf("%f", &b);        //READ USER INPUT
    printf("enter the no. of classes attended. = %f\n", b);   //PRINT USER INPUT
    if((b/a) * 100 < 75) {    //IF-STATEMENT
        printf("your attendance is less than 75%.\n");
        char c;
        scanf(" %c", &c);     //READ USER INPUT
        printf("Do you have a medical cause? 'Y' for yes and 'N' for no. = %c\n", c);   //PRINT USER INPUT
    switch(c) {     //SWITCH CASE
      case 'Y':
        printf("you are eligible for giving the examinations.");
          break;
      case 'N': 
        printf("sorry, you are not eligible for giving the examinations.");
          break;
      default:
          printf("Invalid input.");
  }
    } else{     //ELSE-STATEMENT
        printf(" Roll Number  %d is eligible for giving the examinations.",Rollno);
    }
    return 0;     //RETURN STATEMENT
}