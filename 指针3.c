#include<stdio.h>
void splitfloat(float x,int *intpart,float *fracpart);
int main(void)
{
    float x,y;
    int intpart;
    float fracpart;
printf("Enter a x:");
scanf("%f",&x);
 splitfloat(x,&intpart, &fracpart);

printf("intpart is %d\n",intpart);
printf("fracpart is %f\n",fracpart);

}
void splitfloat(float x,int *intpart,float *fracpart)
{
    *intpart=(int)x;
    *fracpart=x-*intpart;
   
}


