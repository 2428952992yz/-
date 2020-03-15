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
  int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("please name:\n");
    scanf("%s",&stu[i].name);
     printf("please number:\n");
    scanf("%d",&stu[i].number);
    scanf("%d",&stu[i].date);
    }  
    for(j=0;j<n;j++)
    {
        for(i=0;i<n-1;i++)
        {
            if(strcmp(stu[i].name, stu[i+1].name) >0 )
            {
               struct adress temp;
               temp=stu[i+1];
               stu[i+1]=stu[i];
               stu[i]=temp;
            }
        }
    }
        for(i=0;i<n;i++)
        {
            printf("name=%s,number=%d,birthday=%d\n",stu[i].name,stu[i].number,stu[i].date);
        }
        return 0;
} 