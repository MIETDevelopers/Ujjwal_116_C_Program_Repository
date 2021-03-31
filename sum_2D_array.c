#include <stdio.h>
#define MAXROW		10
#define MAXCOL		10

int main()
{
	int matrix[MAXROW][MAXCOL];
	int i,j,r,c;
	int sum,product;
	
	scanf("%d",&r);
	printf("Enter number of Rows : %d\n", r);
	scanf("%d",&c);
	printf("Enter number of Cols : %d\n", c);

	printf("\nEnter matrix elements :\n");
	for(i=0;i< r;i++)
	{
		for(j=0;j< c;j++)
		{
			scanf("%d",&matrix[i][j]);
			printf("Enter element [%d,%d] : %d\n", i+1, j+1, matrix[i][j]);
		}
	}
	//Sum and product of all elements.
	//Initializing sun and product variables.
	sum		=0;
	product	=1;
	for(i=0;i< r;i++)
	{
		for(j=0;j< c;j++)
		{
			sum		+=	matrix[i][j];
			product	*=	matrix[i][j];
		}
	
	}

	printf("\nSUM of all elements : %d \nProduct of all elements :%d",sum,product);
	return 0;	
}