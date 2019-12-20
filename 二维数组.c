#include<stdio.h>
int main(void)
{
    int a[3] [2];
    int i,j;
    printf("Enter 6 numbers");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i] [j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
        printf("%4d",a[i] [j]);
        }
        printf("\n");
    }
    return 0;
}
           
        
    
    
