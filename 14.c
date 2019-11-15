#include<stdio.h>
int main(void){
    int i,n,denominator,flag;
    double item,sum;
    printf("Enter n:");
    scanf("%d",&sum);
    flag=1;
    denominator=1;
    sum=0;
    for(i=1;i<=n;i++){
        i=flag*1.0/denominator;
        sum=sum+item;
        flag=-flag;
        denominator=denominator+2;
    }
    printf("sum=%f\n",sum);
    return 0;                        
}
