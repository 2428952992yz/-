#include<stdio.h>
int main(void)
{
    double term,sum;
    int n,i;
    printf("Enter n:");
    scanf("%d",&n);
    term=1;
    sum=0;
    for(i=1;i<=n;i++){
     term=term*i;
     sum+=1.0/term;
     
    }
     printf("sum=%lf\n",sum+1);
     return 0;

}