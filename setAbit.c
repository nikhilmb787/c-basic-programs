#include<stdio.h>
void main(){

	int num, pos;

	printf("\nEnter the number: "); 
	scanf("%d", &num);

	printf("Enter the pos: ");
	scanf("%d", &pos);

	printf("Before setting bit : %d ", num);

	num = num | 1 << pos;  

	printf("\nAfter setting bit: %d  ", num);


}
