/*NAME:UJJWAL SHARMA
PURPOSE:TO PERFORM A MATRIX MULTICATION*/
#include<stdio.h>	//PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
#include<stdlib.h>	//PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD LIBRARY HEADER FILE
int main()	//STARTING OF MAIN PROGRAM
{
	int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;	//DECLARING THE VARIABLES
	system("cls");
	scanf("%d",&r);		//RAED USER INPUT
	printf("enter the number of row= %d\n", r);	//PRINT USER INPUT
	scanf("%d",&c);		//READ USER INPUT
	printf("enter the number of column= %d\n", c);	//PRINT USER INPUT
	for(i=0;i<r;i++)	//FOR LOOP(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
		{
			for(j=0;j<c;j++)	//FOR LOOP(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
				{
					scanf("%d",&a[i][j]);    //READ USER INPUT
					printf("enter the first matrix elements= %d\n", a[i][j]);	//PRINT USER INPUT
				}
		}
	for(i=0;i<r;i++)	//FOR LOOP(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
		{
			for(j=0;j<c;j++)	//FOR LOOP(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
				{
					scanf("%d",&b[i][j]);	//READ USER INPUT
					printf("enter the second matrix elements= %d\n", b[i][j]);	//PRINT USER INPUT
				}
		}
	printf("multiplication of the matrix=\n");	//PRINT MULTIPLICATION OF MATRICES
	for(i=0;i<r;i++)	//FOR LOOP(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
		{
			for(j=0;j<c;j++)	//FOR LOOP(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
				{
					mul[i][j]=0;	//MULTIPLYING THE ELEMENTS OF MATRICEES
					for(k=0;k<c;k++)	//FOR LOOP(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
						{
							mul[i][j]+=a[i][k]*b[k][j];		//MULTIPLYING THE ELEMENTS OF MATRICES
						}
				}
		}
	//FOR PRINTING RESULT
	for(i=0;i<r;i++)	//FOR LOOP(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
		{
			for(j=0;j<c;j++)	//FOR LOOP(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
				{
					printf("%d\t",mul[i][j]);		//PRINT OUTPUT OF THE PROGRAM
				}
			printf("\n");		//COMAND FOR NEW LINE
		}
	return 0;		//RETURN STATEMENT
}