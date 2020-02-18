#include<stdio.h>
int main(void)
{
    int i=1;
    int *p=&i;
    printf("i=%d\n",i);
    printf("*p=%d\n",*p);
    printf("&p=%p\n",&p);
    return 0;
}