#include<stdio.h>
int main()
{
	int n,c,res=0,t;
	printf("enter n value");
	scanf("%d",&n);
	n=t;
	while(n!=0)
	{
		c=n%10;
		res=res+(c*c*c);
		n=n/10;
	}
	if(t==res)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	}

