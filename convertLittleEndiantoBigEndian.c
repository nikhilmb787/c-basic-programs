#include<stdio.h>
void main(){

	// program to convert from litle endian to big endian
	
	/*  Little endian and big endian are two byte order formats used to store multibyte data types in computer memory. In little endian, the least significant byte is stored in the lowest memory address, while in big endian, the most significant byte is stored at the lowest memory address */

	unsigned int num = 0x12345678;

	unsigned int n1, n2, n3, n4;

	n1 = num & 0xff000000;

	n1 = n1 >> 24;

	n2 = num & 0x00ff0000;

	n2 = n2 >> 8;

	n3 = num & 0x0000ff00;

	n3 = n3 << 8;

	n4 = num & 0x000000ff;

	n4 = n4 << 24;

	printf("%x\n", num);

	num = n1 | n2 | n3 | n4;

	printf("%x\n", num);


}
