
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
void Insert_LinkList(NODE*head,NODE*pnew,int i);
int main(void)
{
    NODE *head,*pnew;
    head=Create_LinkList();
    Display_LinkList(head);
    pnew=(NODE*)malloc(sizeof(NODE));
    if(NULL==pnew)
    {
      return 1;
    }
    printf("please input insert:");
    scanf("%d",&pnew->score);
    pnew->next=NULL;
    Insert_LinkList(head,pnew,);
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
void Insert_LinkList(NODE*head,NODE*pnew,int i)
{
  NODE *p;
  int j;
  p=head;
  for(j=0;j<i&&p!=NULL;j++)//将p指向要插入的第i个节点
  {
    p=p->next;
    if(p==NULL)
    {
      printf("the %d node not foundt！\n",i);
      return ;
    }
    pnew->next=p->next;
    p->next=pnew;
  }
}
