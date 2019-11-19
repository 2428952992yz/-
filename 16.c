#include<stdio.h>
int main(void){
    int i,n,x,sum;
    printf("Enter n:");
    scanf("%d",&sum);
    x=1;
    for(i=1;i<=n;i++){
        x=x*i;
        sum=sum+x;

    }
    printf("sum=%d\n",sum);
    return 0;
}