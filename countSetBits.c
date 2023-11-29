#include<stdio.h>
void main(){

	// program to count how many bits are set in a given integer number

	int num, pos = 0, c = 0;

	printf("Enter the number: ");
	scanf("%d", &num);

L1:
	if(num & 1 << pos)

		c++;

	pos ++;

	if(pos <= 31)

		goto L1;

	printf("No.of bits set = %d clear = %d\n", c, 32 - c);

}
