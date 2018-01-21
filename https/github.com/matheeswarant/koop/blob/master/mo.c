#include<stdio.h>
void main()
{
int number,result=0,rem;
scanf("%d",&number);
while(number!=0)
{
rem=number%10;
result=result+rem*rem*rem;
number=number%10;
}
if(result==number)
printf("number is armstrong no");
else
printf("number is not armstrong no");
}
