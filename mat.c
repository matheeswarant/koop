include<stdio.h>
int main()
{
	int i,a,flag=0;
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	{
		if(a%j==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf(" character is not prime no.%d",a);
	}
	else
	{
		printf("character is prime no.%d",a);
	}
	return 0;
}
