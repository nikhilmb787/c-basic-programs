#include<stdio.h>
void main(){

	int num1, num2, temp;

	printf("Enter the num1: ");
	scanf("%d", &num1);

	printf("\nEnter the num2: ");
	scanf("%d", &num2);

	temp = num1;
	num1 = num2;
	num2 = temp;

	printf("\nAfter swap num1 = %d num2 = %d\n", num1, num2);

}
