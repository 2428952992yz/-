#include<stdio.h>
int main(void)
{
    int a,b,c,i;
    double fact;
    a=1;
    b=1;
    printf("%d %d ",a,b);
    for(i=3;i<=20;i++)
    {
     c=a+b;
     fact=b*1.0/c;
     printf("%d %.5lf",c, fact);
     a=b;
     b=c;

    }
     
     return 0;
     
        
    
}