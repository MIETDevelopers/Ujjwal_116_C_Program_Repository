/*NAME:UJJWAL SHARMA
PURPOSE:PROGRAM FOR READING AND WRITING THE STUDENTS MARKS DATA IN A FILE*/
#include <stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
#include <stdlib.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD LIBRARY HEADER FILE
struct s {
	//CREATING A USER DEFINED DATA TYPE USING STRUCTURE.
	char name[50];
	int RollNo;
	int Marks;
};
int main() {
	struct s a[10],b[10];
	FILE *fptr;
	int i;
	fptr=fopen("C:\\Users\\ujjwal\\Desktop\\C_Repositories\\Ujjwal_116_C_Program_Repository\\31_marks_read_write_student.txt","wb"); //OPENING FILE FROM THE LOCATION
	for (i=0;i<1;++i) {
		fflush(stdin);
		//SCANNING THE ENTERED VALUE.
		printf("Enter Name: ");
		gets(a[i].name);
		printf("Enter Roll Number: ");
		scanf("%d",&a[i].RollNo);
		printf("Enter Marks: ");
		scanf("%d",&a[i].Marks);
	}
	//WRITING PROGRAM.
	fwrite(a,sizeof(a),1,fptr);
	fclose(fptr);
	fptr=fopen("C:\\Users\\ujjwal\\Desktop\\C_Repositories\\Ujjwal_116_C_Program_Repository\\31_marks_read_write_student.txt","rb");
	fread(b,sizeof(b),1,fptr);
	printf("\n Entered details are:\n");
	for (i=0;i<1;++i) {
		printf("	Name: %s\n	Roll Number: %d\n	Marks: %d",b[i].name,b[i].RollNo,b[i].Marks); //PRINTING THE ENTERED TEXT
	}
	fclose(fptr); //CLOSING OF PROGRAM
}
