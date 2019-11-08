#include<stdio.h>

int main(void)
{
    int a,b,max;
    printf("Enter a,b:\n");
    scanf("%d%d",&a,&b);
    if(a>b){
          max=a;
    }else{
        max=b;
    }
    printf("max is %d.\n",max);
     
    return 0;

}

