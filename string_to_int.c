#include<stdio.h>
#include<stdlib.h>

int string_to_int(char *str)
{
	int i,x;

	for(x=0,i=0;str[i];i++)
	{
		if(str[i]=='-')
			i++;
		if(str[i]>='0' && str[i]<='9')
			x=x*10+(str[i]-48);
		else
			break;
	}

	if(str[0]=='-')
		x=-x;

	return x;
}

int main(int argc,char *argv[])
{
	int n=string_to_int(argv[1]);
	printf("number = %d\n",n);
}
