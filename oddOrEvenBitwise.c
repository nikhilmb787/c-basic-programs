#include<stdio.h>
void main(){

	int num;

	printf("Enter the number: ");
	scanf("%d", &num);

	num & 1 ? printf("\nGiven number is odd \n") : printf("\nGiven number is Even \n");


}
