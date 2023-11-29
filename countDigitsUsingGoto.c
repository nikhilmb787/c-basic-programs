#include<stdio.h>
void main(){

	//program to count digits in a given number using goto

	int num, c = 0;

	printf("Enter the number : ");
	scanf("%d", &num);

L1:
	num = num/10;
	c++;

	if(num)

		goto L1;

	printf("count = %d\n", c);

}
