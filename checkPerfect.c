#include<stdio.h>
void main(){

	int num, i, sum = 0;

	printf("Enter the number: ");
	scanf("%d", &num);

	for(i = 1; i <= num/2; i++){
	
		if(num % i == 0)

			sum += i;

	}	

	sum == num ? printf("Perfect number\n") : printf("Not perfect number\n");

}
