#include<stdio.h>
struct stu_info
{
    char no[10];
    char name[20];
    float chinese;
    float math;
    float english;
    float ave;
};
int main(void)
{
    struct stu_info stu[10];
    int i,j,n;
    float sum=0,ave;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("please student name:\n");
    scanf("%s",&stu[i].name);
    scanf("%f",&stu[i].chinese);
    scanf("%f",&stu[i].math);
    scanf("%f",&stu[i].english);
    sum=stu[i].chinese + stu[i].math + stu[i].english;
    stu[i].ave = sum/3.0;
    }
    int minindex;
    for(i=0;i<n-1;i++)
    {
        minindex=i;
        for(j=i+1;j<n;j++)
        {
            if(stu[minindex].ave>stu[j].ave)
            {
                minindex=j;
            }
        }
        if(minindex!=i)
        {
            struct stu_info temp;
            temp=stu[i];
            stu[i]=stu[minindex];
            stu[minindex]=temp;
        }
    }
        for(i=0;i<n;i++)
        {
            printf("name=%s,ave=%.1f",stu[i].name,stu[i].ave);
        }
        return 0;
}
    
    
       
   
