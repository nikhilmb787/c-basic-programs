#include<stdio.h>
void main(){

	int  num, pos;

	printf("Enter the number : ");
	scanf("%d", &num);

	printf("Enter the bit position: ");
	scanf("%d", &pos);

	num & 1 << pos ? printf("\nbit is set\n") : printf("\nbit is clear\n");

}
