#include<stdio.h>
void a(int n);
int main(void)
{
    int n;
    scanf("%d",&n);
    a(n);
    return 0;
}
void a(int n){
    int i,j,k;
    for(i=1;i<=n;i++){
        for ( k=1;k<=2;k++)
        {
            for(j=1;j<=i;j++){
                printf(" ");
            }
            printf("w");
            for(j=1;j<=2*(n-1);j++){
                printf(" ");
            }
                printf("w");
            for(j=1;j<1;j++){
                printf(" ");
            }
            

        }
        
        printf("\n");
    }   

   


}