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
    int i,n;
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
    int maxindex=0;
    for(i=1;i<n;i++)
    {
        if(stu[i].ave>stu[maxindex].ave)
        {
            maxindex = i;
        }
    }
    printf("maxname=%s,maxave=%.1f",stu[maxindex].name,stu[maxindex].ave);
    return 0;
}
    



   
