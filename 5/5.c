#include<stdio.h>
void main()
{
    int a,b,sum;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    sum=a*b;
   if(sum%2==0)
   {
   	printf("even");
   }
   else
   {
   	printf("odd");
   }
    
}
