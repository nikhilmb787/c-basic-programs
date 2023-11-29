#include<stdio.h>
void main(){

	// Display multiplication table of a given input number using goto

	int num, i = 1;

	printf("Enter the number: ");
	scanf("%d", &num);

L1:
	printf("%d * %2d = %2d \n", num, i, num*i);
	
	i++;

	if( i <= 10)

		goto L1;	


}
