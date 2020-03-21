
 #include<stdio.h>
#include<string.h>
char* getmonth(int n);
int main(void)
{
    int repeat,i,j,n;
    char* name;
    char* a[i];
    char* m={"Wrong input!"};
    scanf("%d",&repeat);
    for(i=0;i<repeat;i++)
    {
    scanf("%d",&n);
    name=getmonth(n);
    if(name==NULL){
      a[i]=m;
    }
    else a[i]=name;
    }
    for(i=0;i<repeat;i++)
    {
        printf("%s\n",a[i]);
    }
}
    char* getmonth(int n){
    char* month[20]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    if(n>=1&&n<=12)
        return month[n-1];
    else return NULL;
}
  
