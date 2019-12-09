#include<stdio.h>
int main(void)
{
    int i,j,m;
    for(i=1;i<=7;i++){
        m=i;
        if(i>4)m=4-m%4;
        for(j=0;j<=4-m;j++)
        printf("%c",' ');
        for(j=0;j<2*m-1;j++)
        printf("%c",'*');
        printf("\n");

    }
}
