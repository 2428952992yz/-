#include<stdio.h> 
#include<string.h>
#define MAXN 50
int main(void)
{
    char * pcity[]={"Guangzhou","Beijing","Shenzhen","Wuhan"};
    int i,j,k;
    char *temp;
    for(i=0; strcmp(pcity[i],"")!=0;i++)
    {
        k=i;
        for(j=i+1;strcmp(pcity[j],"")!=0;j++)
        {
            if(strcmp(pcity[j],pcity[k])<0)
            k=j;
        }
        if(k != i)
        {
          temp=pcity[k];
          pcity[k]=pcity[i];
          pcity[i]=temp;
        }
    }
     for(i=0;strcmp(pcity[i],"")!=0;i++)
     {
         printf("%s\n",pcity[i]);
     }
   return 0;
    
}

     
    