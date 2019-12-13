#include<stdio.h>
int main(void)
{
    int i,n,b,c,d;
    int a[10];
    printf("Enter a n:");
    scanf("%d",&n);
    printf("Enter %d numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(b=0;b<b-1;b++)
    {
     c=b;
     for(i=b+1;i<n;i++)
     {
         if(a[i<a[c]])
        c=i; 
     }
     d=a[c];
     a[c]=a[b];
     a[b]=c;
    }
    printf("After sorted:");
      for(i=0;i<n;i++)
    

}