#include<stdio.h>
int main(void)
{
    int a,n,sum,i,term;
    printf("Enter a,n:");
    scanf("%d%d",&a,&n);
    term=0;
    sum=0;
    i=1;
    while(i<=n){
        term=term*10+a;
        sum=sum+term;
        i++;
    }
    printf("sum=%d\n",sum);
    return 0;
}
     
    
    
    





    
