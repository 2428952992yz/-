#include<stdio.h>
int main(void)
{
    int i;
    double average,sum=0;
    int a[10];
    printf("Enter 10 numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[10]);
        sum=sum+a[10];
    }
    average=sum/10;
    printf("average=%.2f\n",average);
    printf(">average");

}