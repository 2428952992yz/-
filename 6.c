#include<stdio.h>
int main(void)
{
    int a,b,c,max,min,temp;
    printf("please input a:");
    printf("please input b:");
    printf("please input c:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b && b>c)
    {
        printf("a=% d,b=% d,c=% d",&a,&b,&c);
    }
    else if(a>b && b<c && a>c)
    {
        printf("a=% d,c=% d,b=% d",&a,&c,&b);
    }
    else if(b>a && a<c)
    {
        printf("b=% d,a=% d,c=% d",&b,&a,&c);
    }
    else if(b>a && b<c && a<c)
    {
        printf("b=% d,c=% d,a=% d",&b,&c,&a);
    }
    else if(c>a && a>b)
    {
        printf("c=% d,a=% d,b=% d",&c,&a,&b);
    }
    else(c>a && a<b && c>b)
    {
        printf("c=% d,b=% d,a=% d",&c,&b,&a);
    }
    return 0;
}


