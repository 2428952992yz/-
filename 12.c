#include<stdio.h>
#define N 5
int main(void)
{
    int i,max;
     int a[N];
     
    
    printf("Enter 5 numbers");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<N;i++)
    {
       if(a[i]>max)
       {
         max=a[i];
       }
       
     
       

    } 
        printf("Max is %d\n",max);
    
       return 0;
     
}  
   
    

