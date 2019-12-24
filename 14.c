#include<stdio.h>
int main(void)
{
    int a[2][3];
    int i,j,max;
    printf("Enter 6 numbers:");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++)
        {
            scanf("%d%d",&a[i][j]);
        }
    }
    max=a[0][0];
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            if(a[i][j]>a[0][0]){
              max=a[i][j];
            }
        }
    }   
    printf("%d\n",max);
    return 0;
  
}
