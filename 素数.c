# include<stdio.h>
#include<math.h>
int isPrime(int m)
 {
     if(m==1)
     return 0;
     int i;
     for(i=2;i<=sqrt(m);i++)
     if(m%i==0){
         return 0;
     }
     return 1;
 }

 
 int main(void){
     int i,m;
     printf("Enter a number:");
     scanf("%d",&m);
     if(isPrime(m)!=0)
         printf("%d",m);
        
     
    
            
         
         else
         {
             printf("No!\n");
         }
       return 0;  
 }     
 
 
 
  
 