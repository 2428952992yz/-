#include<stdio.h>
#include<string.h>
struct peo
{
    char name[10];
};
int main(void)
{
    struct peo stu[10];
    int i,j,n;
     scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("please name:\n");
    scanf("%s",&stu[i].name);
    }  
    for(i=0;i<n-1;i++)
    {
       int minindex=i;
        for(j=i+1;j<n;j++)
        {
            if(strcmp(stu[i].name, stu[j].name) >0 )
            {
               struct peo temp;
               temp=stu[i];
               stu[j]=stu[i];
               stu[i]=temp;
            }
        }
    }
        for(i=0;i<n;i++)
        {
            printf("name=%s\n",stu[i].name);
        }
        return 0;
} 
