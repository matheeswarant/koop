#include <stdio.h>
#include<conio.h>
void main()
{
int s, reverse=0, r,t;
printf("Enter an integer:");
scanf("%d", &s);
t=s;
while(t!=0)
{
r=t%10;
reverse=reverse*10+r;
t=10;
}
}
