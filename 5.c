#include<stdio.h>
int main(void)
{
    float a,b;
    printf("Enter 电费:\n");
    scanf("%f",&a);
    if(a<=50){
           b=a*0.53;
    }else{
        b=50*0.53+(a-50)*(0.53+0.05);
    }
    printf("b is %f.\n",b);
    return 0;1
}


