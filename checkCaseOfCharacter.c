#include<stdio.h>
void main(){

	char ch;

	printf("Enter the character: ");
	scanf("%c", &ch);

	if(ch >= 'a' && ch <= 'z')

		printf("Lower Case ...\n");

	else if(ch >= 'A' && ch <= 'Z')

		printf("Upper Case ...\n");

	else if(ch >= '0' && ch <= '9')

		printf("Digit ...\n");

	else

		printf("Special Character ...\n");	



}
