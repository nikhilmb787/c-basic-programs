#include<stdio.h>
void main(){

	int num, pos;

	printf("\nEnter the number: "); 
	scanf("%d", &num);

	printf("Enter the pos: ");
	scanf("%d", &pos);

	printf("Before complimenting bit : %d ", num);

	num = num ^ 1 << pos;  

	printf("\nAfter complementing bit: %d  ", num);


}
