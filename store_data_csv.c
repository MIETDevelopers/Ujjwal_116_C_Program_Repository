/*NAME:UJJWAL SHARMA
PURPOSE:TO STORE DATA IN CSV FILE*/
#include <stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
struct s{    //USING STRUCTURES TO CREATE A USER DEFINE DATA TYPE 
	char name[50];
	int roll;
	float attendance;
};
int main(){   	//STARTING OF MAIN PROGRAM
	struct s a[5], b[5];
	FILE *fptr;
	fptr=fopen("store_data_csv.csv","wb");   //FOR OPENING THE FILE
	for (int i=0; i<5; ++i)	 //FOR LOOP(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
	{
		fflush(stdin);
		printf("\nEnter details of student %d:\n", i+1);
		gets(a[i].name);   //FOR NAME
		printf("Enter Name: %s", a[i].name);
		scanf("%d", &a[i].roll);    //FOR ROLL NUMBER
		printf("\nEnter Roll Number: %d", a[i].roll);
		scanf("%f", &a[i].attendance);   //FOR ATTENDENCE
		printf("\nEnter Attendance Percentage: %f", a[i].attendance);
		printf("\n");
	}
	fwrite(a, sizeof(a), 1, fptr);  	//FOR WRITING IN A FILE
	fclose(fptr);
	fptr=fopen("store_data_csv.csv","rb");
	fread(b, sizeof(b), 1, fptr);	  //FOR READING FROM THE FILE
	for (int i=0; i<5; ++i)	 //FOR LOOP(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
	{
		printf("Name: %s\nRoll Number: %d\nAttendance Percentage: %.1lf\n", b[i].name, b[i].roll, b[i].attendance);		//PRINTING THE STORED ENTERED DETAILES
	}
	fclose(fptr);
	return 0;  //RETURN STATEMENT
}