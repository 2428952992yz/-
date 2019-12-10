#include<stdio.h>
#define N 5
int main(void)
{
    int i,max;
     int a[N];
     max=a[0];
    
    printf("Enter 5 numbers");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[N]);
    }
    for(i=1;i<N;i++)
    {
       if(a[i]>max)
         max=a[i];
    } 
        printf("%d",max);
    
       return 0;
     
}  
   
    

