#include <stdio.h>

int main()
{
    int p,b[10],i,sum=0;
    int avg;
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        scanf("%d",&b[i]);
        sum=sum+b[i];
    }
   
    avg=sum/p;
    
    printf("%d",avg);
   
    

    return 0;
}
