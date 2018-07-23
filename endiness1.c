#include<stdio.h>
#include<stdlib.h>

struct number
{
	unsigned char ch1;
	unsigned char ch2[2];
	unsigned char ch3;
};

int main()
{
	int n=(256*256)-1;
	struct number num;
	
	//Extraction of number per bytewise
	
	//first byte
	num.ch1=(n & 255);
	//second byte
	//right shift simultaneously b'coz char accept first byte
	num.ch2[0]=(n&0x0000ff00)>>8;	
	//third byte
	num.ch2[1]=(n&0x00ff0000)>>16;
	//fourth byte
	num.ch3=(n&0xff000000)>>24;

	printf("Bytes are-\n");
	printf("%d\n",num.ch1 );
	printf("%d\n",num.ch2[0] );
	printf("%d\n",num.ch2[1] );
	printf("%d\n",num.ch3 );

	
	// Regeneration of number
	int n1=num.ch1;
	int n2=num.ch2[0]<<8;
	int n3=num.ch2[1]<<16;
	int n4=num.ch3<<24;

	printf("Number is: %d",(n1+n2+n3+n4));
	
}