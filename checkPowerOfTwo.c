#include<stdio.h>
void main(){

	int num;

	printf("Enter the number : ");
	scanf("%d", &num);

	num & num - 1 ? printf("\nNot a power of 2\n") : printf("\nYes power of 2\n");


}
