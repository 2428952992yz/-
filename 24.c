#include<stdio.h>
int main(void){
    int i;
    for(i=1;i<=5;i++)
    {
        if(3==i)
        break;
        printf("%d",i);
    }
    return 0;
}

