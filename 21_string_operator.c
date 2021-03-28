/*NAME:UJJWAL SHARMA
PURPOSE:TO DEMONSTRATE THE USE OF STRING FUNCTIONS*/
#include <stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
#include <string.h> //PREPROSESSIVE DIRECTIVE TO INCLUDE STRING INPUT OUTPUT HEADER FILE
int main()  //STARING OF MAIN PROGRAM
{
     char str1[20] = "Ujjwal_sharma";
     printf("Length of string str1 when maxlen is 30: %d", strnlen(str1, 30));
     printf("Length of string str1 when maxlen is 10: %d", strnlen(str1, 10));
     return 0;
}
// C STRING FUNCTION – strcmp
#include <stdio.h>
#include <string.h>
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
//C STRING FUNCTION – strcat
#include <stdio.h>
#include <string.h>
int main()
{
     char s1[10] = "Hello";
     char s2[10] = "World";
     strcat(s1,s2);
     printf("Output string after concatenation: %s", s1);
     return 0;
}
//C STRING FUNCTION – strcpy
#include <stdio.h>
#include <string.h>
int main()
{
     char s1[30] = "string 1";
     char s2[30] = "string 2 : I’m gonna copied into s1";
     /* this function has copied s2 into s1*/
     strcpy(s1,s2);
     printf("String s1 is: %s", s1);
     return 0;
}
//C STRING FUNCTION – strchr
#include <stdio.h>
#include <string.h>
int main()
{
     char mystr[30] = "I’m an example of function strchr";
     printf ("%s", strchr(mystr, 'f'));
     return 0;
}
//C STRING FUNCTION – strstr
#include <stdio.h>
#include <string.h>
int main()
{
     char inputstr[70] = "String Function in C at Ujjwal Sharma ";
     printf ("Output string is: %s", strstr(inputstr, 'Ujjw'));
     return 0;      //RETURN STATEMENT
}