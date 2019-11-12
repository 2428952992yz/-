#include<stdio.h>
int main(void)
{
   float x;
   printf("Enter x:");
   scanf("%f,&x");
   if(x<=100&&x>=90){
   
       printf("you are A\n");
   }
       else if(x<90&&x>=80){
           printf("you are B\n");
       }
       else if(x<80&&x>=70){
           printf("you are C\n");
       }
       else if(x<70&&x>=60){
           printf("you are D");
       }
       else if(x<60&&x>=0){
           printf("you are E\n");
       }
   
   else
   {
    printf("you are wrong\n");
   }
   return 0;
   
}