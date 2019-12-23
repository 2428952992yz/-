#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("Enter 3 numbers");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("变量a\t变量b\t变量c\t\n");//\n是换行，\t是换列//
    printf("%d\t%d\t%d\t\n",a,b,c);
    return 0;
}
