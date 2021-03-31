#include <stdio.h> //INCLUDING STANDARD INPUT OUTPUT HEADER FILE
#include <stdlib.h>//INDLUDING STANDARD LIBRARY HEADER FILE
#include <string.h>//INCLUDING STRING HEADER FILE 

const char* getfield(char* line, int num)
{
    const char* tok;
    for (tok = strtok(line, ";");
            tok && *tok;
            tok = strtok(NULL, ";\n"))
    {
        if (!--num)
            return tok;
    }
    return NULL;
}
int main()
{
    FILE* stream = fopen("C:\\Users\\ujjwal\\Desktop\\C_Repositories\\Ujjwal_116_C_Program_Repository\\csv_file.csv", "r"); //PATH OF .csv FILE

    char line[1024];
    while (fgets(line, 1024, stream))
    {
        char* tmp = strdup(line);
        printf("Field 3 would be %s\n", getfield(tmp, 3));
        free(tmp);
    }
}
