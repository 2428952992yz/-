#include<stdio.h>
int main(void)
{
    int i,j,m;
    m=1;
   for(j=0;j<=4-m;j++)
        printf("%c",' ');
        for(j=0;j<2*m-1;j++)
        printf("%c",'*');
        printf("\n");
}
