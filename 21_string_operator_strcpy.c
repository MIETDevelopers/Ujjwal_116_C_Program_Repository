/*NAME:UJJWAL SHARMA
PURPOSE:TO DEMONSTRATE THE USE OF STRING FUNCTIONS*/
#include <stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
#include <string.h> //PREPROSESSIVE DIRECTIVE TO INCLUDE STRING INPUT OUTPUT HEADER FILE
int main()
{	//string function - strcpy()
    char s1[50] = "string 1";
    char s2[50] = "string 2 : I’m gonna copied into s1";
    /* this function has copied s2 into s1*/
    strcpy(s1,s2);
    printf("String s1 is: %s", s1);
    return 0;
}
