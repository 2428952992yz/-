#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,flag;
    double pi,i;
    flag=1;
    a=1;
    i=1.0;
    pi=0;
    while(fabs(i)>=0.0001){
        i= flag*1.0/a;
        pi+=i;
        flag=-flag;
        a=a+2;
    
    }
    pi=pi*4;
    printf("pi=%.4lf\n",pi);
    return 0;


}