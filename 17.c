#include<stdio.h>
int main(void)
{
    int a,b,c,i;
    a=1;
    b=1;
    printf("%d %d",a,b);
    for(i=3;i<=20;i++)
    {
     c=a+b;
     printf("%d ",c);
     a=b;
     b=c;

    }
     
     
     
        
    
}