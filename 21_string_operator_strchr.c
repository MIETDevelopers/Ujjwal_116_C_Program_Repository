/*NAME:UJJWAL SHARMA
PURPOSE:TO DEMONSTRATE THE USE OF STRING FUNCTIONS*/
#include <stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
#include <string.h> //PREPROSESSIVE DIRECTIVE TO INCLUDE STRING INPUT OUTPUT HEADER FILE
int main()
{	//string function - strchr()
    char mystr[50] = "I’m an example of function strchr";
    printf ("%s", strchr(mystr, 'f'));
    return 0;	//RETURN STATEMENT
}
