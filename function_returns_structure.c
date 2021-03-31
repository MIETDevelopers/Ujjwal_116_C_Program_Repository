/*NAME:UJJWAL SHARMA
PURPOSE:TO DEMONSRATE THR FUNCTION IMPLEMENTATION RETURNS A POINTER*/
#include<stdio.h>   //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
struct student
{
    char name[50];
    int age;
};

//FUNCTION PROTOTYPE
struct student getInformation();

int main()
{
    struct student s;

    s = getInformation();

    printf("\nDisplaying information\n"); //printf() FUNCTION CALLING
    printf("Name: %s", s.name);
    printf("\nAge: %d", s.age);
   
    return 0;     //RETURN STATEMENT
}
struct student getInformation()
{
  struct student s1;

  scanf ("%[^\n]%*c", s1.name);
  printf("Enter name: %c\n", s1.name);

  scanf("%d", &s1.age);
  printf("Enter age: %d\n", s1.age);
 
  return s1;      //RETURN STATEMENT
}
