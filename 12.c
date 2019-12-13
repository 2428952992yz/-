#include<stdio.h>
void storeZeros(int a[],int n);
int main(void)
{
    int i,min,n;
     int a[5];
     printf("Enter 5 numbers");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%3d",a[i]);
    }
    printf("\n");
    storeZeros(a,5);
    for(i=0;i<5;i++)
    {
        printf("%3d",a[i]);
    }
    printf("\n");
    return 0;
}
void storeZeros(int a[],int n)  
{
    int i;
    for(i=0;i<5;i++)
    {
        a[i]=0;
    }
    
}