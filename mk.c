#include<stdio.h>
int main()
{
int m,r,sum=0,temp;
scanf("%d",&m);
temp=a;
while(temp!=0)
{
r=temp%10;
sum=sum+(r*r*r);
temp=temp/10;
}
if(sum==a)
{
printf("%d is not armstrong number",m);
}
else
{
printf("%d is a armstrong number",m);
}
return 0;
}
