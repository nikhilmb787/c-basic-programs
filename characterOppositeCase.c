#include<stdio.h>
void main(){
	// programing for converting character to the opposite case 
	char ch;

	printf("\nEnter the character : ");
	scanf("%c", &ch);

	printf("\nBefore conversion : %c", ch);
	
	ch = ch ^ 32;

	printf("\nAfter conversion : %c ", ch);

}
