#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	printf("No. of arguments is %d\n",argc);
	//										           atoi for conversion of string into int
	printf("Sum of %s and %s is: %d\n",argv[1],argv[2],atoi(argv[1])+atoi(argv[2]));
	
}
