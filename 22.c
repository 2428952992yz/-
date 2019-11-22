#include<stdio.h>
int main(void){
    int n,sum=0,term=0;
    printf("Enter n:\n");
    scanf("%d",&n);
    do{
        term=n%10;
        sum=sum+term;
        n=n/10;
    }while(n!=0);
    printf("sum=%d\n",sum);
    return 0;
}