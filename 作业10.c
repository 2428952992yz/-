#include<stdio.h>
int main(void)
{
    int a,n,sum,i,term;
    printf("Enter a n:");
    scanf("%d%d",&a,&n);
    term=0;
    sum=0;

    for(i=1;i<=n;i++){
        term=term*10+a;
        sum=sum+term;
    }
    
        
    
        
    
    printf("sum=%d\n",sum);
    return 0;
}
     