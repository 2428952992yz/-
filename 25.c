#include<stdio.h>
int max(int a,int b)
{
    if(a>b){
    return a;
    }else{
        return b;
    }
}
int main(void)
{
int x,y;
printf("Enter two number:\n");
scanf("%d%d", &x, &y);
printf("Max is %lf\n",max(x,y));
return 0;
}  