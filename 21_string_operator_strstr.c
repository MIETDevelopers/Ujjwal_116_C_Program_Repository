/*NAME:UJJWAL SHARMA
PURPOSE:TO DEMONSTRATE THE USE OF STRING FUNCTIONS*/
#include <stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
#include <string.h> //PREPROSESSIVE DIRECTIVE TO INCLUDE STRING INPUT OUTPUT HEADER FILE
int main()
{	//string function - strstr()
    char inputstr[50] = "String Function in C at  Ujjwal Sharma";
    printf("Output string is: %s", strstr(inputstr, 'Ujjwal'));
    return 0;
}
