#include<stdio.h>
int findmim(int a[],int n);
int main(void)
{
    int i,min;
     int a[5];
     printf("Enter 5 numbers");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    min=findmin(a,min);
}    
    int findmin(int a[])
    {
        int i,min;
        min=0;
    for(i=1;i<5;i++)
    {
       if(i<min)
       {
         min=i;
       }
    }
}


