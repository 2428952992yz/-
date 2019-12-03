#include<stdio.h>
int main(void)
{
    int a,b,c,e,x;
    float y;
    printf("Enter a,b,c,e:\n");
     scanf ("%d%d%d%d",&a,&b,&c,&e);
    x=a+b+c+e;
    y=x/4.0f;
    
     
    printf("x=%d,y=%.1f",x,y);
    return 0;



}