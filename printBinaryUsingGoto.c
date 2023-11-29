#include<stdio.h>
void main(){

	int num, pos = 31;

	printf("Enter the number: ");
	scanf("%d", &num);

L1: 
	printf("%d", num >> pos & 1);

	pos--;

	if(pos >= 0)

		goto L1;

	printf("\n");


}
