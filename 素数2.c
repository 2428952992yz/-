 #include<stdio.h>
 int main(void){
     int i,m;
     int m=2;
     
     for(i=2;i<=m/2;i++){ 
         if(m % i==0)
         break;
     }    
         if(i>=m/2 && m!=1){
             printf("%d is a prime number!\n",m);
         }
         else
         {
             printf("No!\n");
         }
       return 0;  