#include<stdio.h>
void main(){

	char ch;

	printf("\nEnter the character : ");
	scanf("%c", &ch);

	printf("\nBefore conversion : %c", ch);
	
	ch = ch ^ 32;

	printf("\nAfter conversion : %c ", ch);

}
