#include<stdio.h>
int main(void)
{
    float h,g;
    int t;
    printf("Enter time:\n");
    scanf("%d",&t);
    g=10;
    
    h=0.5*g*t*t;
    printf("h is %f\n",h);
    return 0;

}