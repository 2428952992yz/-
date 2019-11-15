#include<stdio.h>
int main(void){
    int i,n,sum;
    printf("Enter n:");
    scanf("%d", &n);
    sum=1;
    for(i=1;i<=n;i++){
        sum=sum*i;
    }
    printf("Sum is %d\n",sum);
    return 0;
}