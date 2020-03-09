#include<stdio.h>
struct stu_info
{
    char no[10];
    char name[20];
    float chinese;
    float math;
    float english;

};
int main(void)
{
    struct stu_info stu;
    float sum=0,ave;
    printf("please student no:");
    scanf("%s",stu.no);
    scanf("%s",stu.name);
    scanf("%f",stu.chinese);
    scanf("%f",stu.math);
    scanf("%f",stu.english);
    sum=stu.chinese+stu.math+stu.english;
    ave=sum/3;
    printf("sum=%f,ave=%f",sum,ave);
    



    return 0;
}