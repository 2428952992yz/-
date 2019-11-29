#include<stdio.h>
int main(void)
{
    int i, m,count;
    count=0;
    for(m=2;m<500;m++){
        for(i=1;i<=m/2;i++){
            if(m%i==0)
            break;
            if(i>=m && m!=0)
            printf("%5d",i);
        }
    }
}
