#include<stdio.h>
int main(void)
{
    int k,t;
    float c;
    printf("Enter k,t:\n" );
    scanf("%d%d",&k,&t);
    if(k<=10){
       if(k<=3){
           c=10+t%5*2;
       }else{
           c=10+(k-3)*2+t%5*2;
       }
    }
    else{
        c=10+7*2+(k-10)*3+t%5*2;
    }   
    c=(int)
    printf("c=%d.\n",c);
    return 0;
}