#include<stdio.h>
int main(){
	int num, fact=1, i;
	scanf("%d",&num);
	printf("Enter a number = %d",num);
	for (i=num;i>=1;i--){
		fact = fact*i;
	}
	printf("\nFactorial of a number %d is = %d", num, fact);
	return 0;
}