/*NAME:UJJWAL SHARMA
PURPOSE:TO FIND WHETHER AN ALPHABET IS VOWEL OR CONSONANT */
#include <stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE

int main()      //STARTING THE MAIN PROGRAM
{
    char ch;    //DECLARING VARIABLE NAMED "ch"
    scanf("%c", &ch);   //READ INPUT FROM USER
    printf("Enter any character: %c\n", ch);      //PRINT THE INPUT

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')     //CONDITION FOR VOWEL
    {
        printf("Alphabet '%c' is Vowel.", ch);
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))   //CONDITION FOR CONSONANT
    {
        printf("Alphabet '%c' is Consonant.", ch); 
    }
    else 
    {
        //IF IT IS NEITHER VOWEL NOR CONSONANT THEN IT IS NOT AN ALPHABET.
        printf("'%c' is not an alphabet.", ch);
    }

    return 0;       //RETURN STATEMENT
}