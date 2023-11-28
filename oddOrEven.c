#include<stdio.h>
void main(){

	int num;

	printf("Enter the number : ");
	scanf("%d", &num);

	num % 2 ? printf("\nThe given number is odd \n") : printf("\nThe given number is even \n");

}
