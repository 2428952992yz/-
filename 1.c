
  #include<stdio.h>
#include<string.h>
char* getmonth(int n);
int main(void)
{
    int repeat,i,n;
    char* name;
    scanf("%d",&repeat);
    for(i=0;i<repeat;i++)
    {
    scanf("%d",&n);
    name=getmonth(n);
    }
}
    char* getmonth(int n){
    char* month[20]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    if(n>=1&&n<=12)
        return month[n-1];
    else return NULL;
    }