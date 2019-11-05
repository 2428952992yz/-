#include<stdio.h>
int main(void)
{
    int a;
    printf("Enter a:\n");
    scanf("%d",a);
    if(a>=0){
        a=a;
    }else{
        a=-a;

    }
  return 0;
}