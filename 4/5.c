#include<stdio.h>
void main()
{
int a,c=0,n,n1;
printf("enter the values");
scanf("%d",&n);
while(n<10)
{
n1=n%10;
c++;
n=n/10;
}
printf(("%d",c);
}
