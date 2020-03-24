#include<stdio.h>
#include<malloc.h>
struct stu
{
    int score;
    struct stu *next;
};
typedef struct stu NODE;
NODE *Create_LinkList(void);
void Display_LinkList(NODE*head);
void Delete_LinkList(NODE *head,int i);
int main(void)
{
    NODE *head;
    head=Create_LinkList();
    Display_LinkList(head);
    return 0;
}
NODE *Create_LinkList(void)
{
    NODE *head, *tail, *pnew;
    int score;
    head = (NODE*)malloc(sizeof(NODE));
    if(head==NULL)
    {
      return NULL;
    }
    head->next=NULL;
    tail=head;
    printf("please input scores:");
    while(1)
    {
        scanf("%d",&score);
        if(score<0)
        break;
         pnew = (NODE*)malloc(sizeof(NODE));
    if(NULL==pnew)
    {
      return NULL;
    }
   pnew->score=score;
   pnew->next=NULL;
   tail->next=pnew;
   tail=pnew;

    }
    return head;
}
void Display_LinkList(NODE*head)
{
  NODE *p;
  p=head->next;
  while(p!=NULL)
  {
      printf("score=%d\n",p->score);
      p=p->next;
  }
}
void Delete_LinkList(NODE *head,int i)
{
    
}