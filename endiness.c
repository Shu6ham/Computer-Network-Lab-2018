#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n=1;

	//char pointer for taking address of first byte
	//unsigned char b'coz number can be greater than 127
	//                 typecasting
	unsigned char*a = (char*)&n;

	if(*a)
		printf("Little Endian\n");
	else
		printf("Big Endian\n");

	return 0;
}