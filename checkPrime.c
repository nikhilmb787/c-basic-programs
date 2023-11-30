#include<stdio.h>
void main(){

	//prime numbers are natural number greater than 1 that has no divisors other than 1 and itself

	int num, flag, i;

	printf("Enter the number: ");
	scanf("%d", &num);

	for(i = 2, flag = 0; i <= num / 2; i++){

		if(num % i == 0){
		
			flag = 1;
			break;
		
		}
	}	

		if(num == 1)

			printf("1 is not prime nor composite.\n");
		else{
		
			if(flag == 1)

				printf("Not Prime\n");
			else

				printf("Prime\n");
		
		}

}
