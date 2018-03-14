#include<stdio.h>
int main()
{
int b[50],i,n,large,small;
scanf("%d",&n);
for(i=0;i<n;++i)
scanf("%d",&b[i]);
large=small=b[0];
for(i=1;i<n;++i)
{
if(b[i]>large)
large=b[i];
if(b[i]<small)
small=b[i];
}
printf("%d",small);
printf("%d\t",large);
return 0;
}
