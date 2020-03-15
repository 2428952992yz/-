#include<stdio.h>
#include<string.h>
struct birthday
{
    int year;
    int month;
    int day;
};
struct adress
{
  char name[10];
  int number;
  struct birthday date;
};
int main(void)
{
  struct adress stu[10];
  int i,j,n,minindex;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("please name:\n");
    scanf("%s",&stu[i].name);
     printf("please number:\n");
    scanf("%d",&stu[i].number);
    scanf("%d",&stu[i].date);
    }  
    for(i=0;i<n-1;i++)
    {
        minindex=i;
        for(j=i+1;j<n;j++)
        {
            if(strcmp(stu[i].name,stu[j].name)>0)
            {
               struct adress temp;
               temp=stu[i];
               stu[j]=stu[i];
               stu[i]=temp;
            }
        }
    }
        for(i=0;i<n;i++)
        {
            printf("name=%s,birthday=%d,number=%d",stu[i].name,stu[i].date,stu[i].number);
        }
        return 0;
} 