#include<stdio.h>
void main(){
	
	// program to reversing bits of a given number


	int num, i, j, pos, m, n;

	printf("Enter the number: ");
	scanf("%d", &num);

	printf("\nBefore reversing the number: ");

	for(pos = 31; pos >= 0; pos--)

		printf("%d", num >> pos & 1);

	printf("\n");

	for(i = 0, j = 31; i < j; i++, j--){
	
		m = num >> i & 1;
		n = num >> j & 1;

		if(m != n){
		
			num = num ^ 1 << i;
			num = num ^ 1 << j;

		}
	
	}

	printf("\nAfter reversing the number: ");

	for(pos = 31; pos >= 0; pos--)

		printf("%d", num >> pos & 1);

	printf("\n");

}
