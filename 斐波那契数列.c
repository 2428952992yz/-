#include<stdio.h>
int main(void)
{
    int i,a,b,x;
    a=1;
    b=1;
    printf("%6d%6d",a,b);
    for(i=1;i<=8;i++)
    {
        x=a+b;
        printf("%6d",x);
        a=b;
        b=x;
    }
    printf("\n");
    return 0;
}