#include<stdio.h>
int main(void){
    int x,y,z;
    for(x=0;x<=20;x++)
     for(y=0;y<=33;y++)
      for(z=0;z<=100;z++)
     if(x+y+z==100 && 15*x+9*y+z==300)
     printf("x=%d,y=%d,z=%d\n",x,y,z);
     return 0; 
}