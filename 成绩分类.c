#include<stdio.h>
int main(void)
{
   float x;
   printf("Enter x:");
   scanf("%f",&x);
   if(x<60){
   
       printf("E\n");
   }
       else if(x<70){
           printf("D\n");
       }
       else if(x<80){
           printf("C\n");
       }
       else if(x<90){
           printf("B\n");
       }
       else if(x<100){
           printf("A\n");
       }
   

   
    
   
   return 0;
   
}