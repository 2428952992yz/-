#include<stdio.h>
int findmin(int a[],int n);
int main(void)
{
    int i,min;
     int a[5];
     printf("Enter 5 numbers");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    min=findmin(a,5);

    printf("min is %d",min);
    return 0;
    
}    
    int findmin(int a[],int n)
    {
        int i,min;
        min=0;
    for(i=1;i<5;i++)
    {
       if(a[i]<a[min])
       {
         min=i;
       }
    }
    return a[min];
}


