#include<stdio.h>
void swapl1(int x,int y),swapl2(int *px,int *py),swapl3(int *px,int *py);
int main(void)
{
    int a=1,b=2;
    int *pa=&a, *pb=&b;
    swapl1(a,b);
    printf("swapl1: a=%d b=%d\n",a,b);
    a=1;
    b=2;
    swapl2(pa,pb);
    printf("swapl2:a=%d b=%d\n",a,b);
    a=1;
    b=2;
    swapl3(pa,pb);
    printf("swapl2:a=%d b=%d\n",a,b);
    return 0;
}
void swapl1(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
void swapl2(int *px,int *py)
{
    int t;
    t=*px;
    *px=*py;
    *py=t;
}
void swapl3(int *px,int *py)
{
    int *pt;
    pt=px;
    px=py;
    py=pt;
}