 #include<stdio.h>
#include<string.h>
char* getmonth(int n);
int main(void)
{
    int repeat,i,j,n;
    char* name;
    char* a[j];
    char* m={"Wrong input!"};
    scanf("%d",&repeat);
    for(i=0;i<repeat;i++)
    {
    scanf("%d",&n);
    name=getmonth(n);
    j=i;
    if(name==NULL){
      a[j]=m;
    }
    else a[j]=name;
    }

    for(j=0;j<repeat;j++)
    {
        printf("%s\n",a[j]);
    }
}
    char* getmonth(int n){
    char* month[20]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    if(n>=1&&n<=12)
        return month[n-1];
    else return NULL;
}
  
