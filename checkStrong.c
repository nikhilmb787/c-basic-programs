#include<stdio.h>
void  main(){

	// Program to check the given number is strong or not
	
	/*  strong number is a number whose sum of factorial of its indivual digits is equal to the original number */

	int num, temp, rem, str = 0, fact = 1;

	printf("Enter the number : ");
	scanf("%d", &num);

	temp = num;

	while(temp > 0){
	
		rem = temp % 10;

		fact = 1;

		for(int i = 1; i <= rem; i++){
		
			fact = fact * i;
		
		}

		str += fact;
		
		temp /= 10;


	}
		
		if(str == num)

			printf("Strong\n");

		else

			printf("Not a strong number\n");

}
