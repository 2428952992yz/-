#include<stdio.h>
int main(void)
{
    int m, n=5;
    m=--n + n++;
    printf("%d\n",n);
    printf("%d\n", m);
    return 0;
}
