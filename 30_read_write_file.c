/*NAME:UJJWAL SHARMA
PURPOSE:PROGRAM TO READ AND WRITE IN A FILE*/
#include <stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
#include <stdlib.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD LIBRARY HEADER FILE
struct s {
	//CREATING A USER DEFINED DATA TYPE USING STRUCTURES
	char text[1000];		//"text" VARIABLE WITH "char" DATA TYPE
	};
 int main(){	//STARTING OF MAIN PROGRAM
	struct s a[1000],b[1000];
	FILE *fptr;
	int i;
	fptr=fopen("C:\\Users\\ujjwal\\Desktop\\C_Repositories\\Ujjwal_116_C_Program_Repository\\30_read_write_file.txt","wb"); //Opening the file from the location.
	for (i=0;i<1;++i) {
		fflush(stdin);
		printf("Enter Text: ");
		gets(a[i].text); //SCANNING THE ENTERED TEXT
	}
	//WRITING PROGRAM
	fwrite(a,sizeof(a),1,fptr);
	fclose(fptr);
	fptr=fopen("C:\\Users\\ujjwal\\Desktop\\C_Repositories\\Ujjwal_116_C_Program_Repository\\30_read_write_file.txt","rb");
	fread(b,sizeof(b),1,fptr);
	printf("\n Entered details are:\n");
	for (i=0;i<1;++i) {
		printf("%s\n",b[i].text); //PRINTING THE ENTERED TEXT
	}
	fclose(fptr); //CLOSING THE PROGRAM
}