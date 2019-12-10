#include<stdio.h>

int main(void)
{
    int i,j,k;
    for(i=1;i<=5;i++){
        for ( k=1;k<=2;k++)
        {
            for(j=1;j<=i;j++){
                printf(" ");
            }
            printf("w");
            for(j=1;j<=2*(5-i);j++){
                printf(" ");
            }
                printf("w");
            for(j=1;j<i;j++){
                printf(" ");
            }
            

        }
        
        printf("\n");
    }   

   
      return 0;

}