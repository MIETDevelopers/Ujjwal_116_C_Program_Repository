/*NAME:UJJWAL SHARMA
PURPOSE:TO DEMONSTRATE THE USE OF STRING FUNCTIONS*/
// C STRING FUNCTION – strcmp
#include <stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
#include <string.h> //PREPROSESSIVE DIRECTIVE TO INCLUDE STRING INPUT OUTPUT HEADER FILE
int main()
{
     char s1[20] = "Ujjwal";
     char s2[20] = "Ujjwal Sharma ";
     if (strcmp(s1, s2) ==0)
     {
        printf("string 1 and string 2 are equal");
     }else
      {
         printf("string 1 and 2 are different");
      }
     return 0;
}
