#include<stdio.h>
void main(){

	int num1, num2;

	printf("Enter the number1: ");
	scanf("%d", &num1);

	printf("\nEnter the number2: ");
	scanf("%d", &num2);
	
	printf("\nBefore swap number1 = %d number2 = %d ", num1, num2);

	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	printf("\nAfter swap number1 = %d number2 = %d ",num1,num2); 


}
