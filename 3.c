#include<stdio.h>
#include<string.h>
char* getmonth(int n);
int main(void)
{
    int repeat,i,n;
    char name;
    scanf("%d",&repeat);
    for(i=0;i<repeat;i++)
    {
    scanf("%d",&n);
    name=getmonth(n);
    if(n=-1){
    printf("Wrong input!\n");
    }
    else printf("%s",name);
    }
}
char* getmonth(int n){
    char month[12][20]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    if(n>0&&n<13)
    {
        return &month[n-1][0];
    }
    else return -1;
}
  
