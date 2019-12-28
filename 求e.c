#include<stdio.h>
int main(void){
    int i,j;
    double sum,temp;
       sum=0;
    for(i=1;i<=100;i++)
    {
        temp=1;
        for(j=1;j<=i;j++)
        {
       temp=temp*j;
        }
        sum=sum+1.0/temp;
    }
    sum=sum+1; 

    
    printf("e is %f\n",sum);
    return 0;
}