#include<stdio.h>
void main(){

	// program to check the given number is armstrong or not
	

	/* Armstrong number is the number that is equal to the sum of its own digits each rasised to the power of the number of digits in the number */

	int num, temp, arm, rem, sum = 0, count = 0;

	printf("Enter the number: ");
	scanf("%d", &num);

	temp = num;

	for(temp ; temp > 0; temp /= 10, count++); // dummy for loop to count the digits in the given number
	
	temp = num;

	while(temp > 0){

		arm = 1;
	
		rem = temp % 10;

		for(int i = 0; i < count; i++){
		
			arm = arm * rem;
		
		}

		sum += arm;

		temp /= 10;
	
	}

	if(sum == num)

		printf("Armstrong number\n");

	else

		printf("Not armstrong\n");

}
