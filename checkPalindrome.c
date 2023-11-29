#include<stdio.h>
void main(){

	
	// Program to check the given number is palindrome or not
	
	// palindrome numbers are number which are equal to its reverse

	int num, rem, c = 0, rev, temp;

	printf("Enter the start: ");
	scanf("%d", &num);

	for(rev = 0, temp = num; temp > 0; temp /= 10){
	
		rem = temp % 10;
		rev = rev * 10 + rem;
	
	}

	if(num == rev)

		printf("\nPalindrome\n");

	else

		printf("\nNot Palindrome\n");	

}
