#include<stdio.h>
#include<malloc.h>
struct Grade_Info
{
    int score;
    struct Grade_Info *next;
};
typedef struct Grade_Info NODE;

NODE *Create_LinkList(void);
void Display_LinkList(NODE *head);//??
void Free_LinkList(NODE *head);  //??
void Insert_LinkList(NODE *head, NODE *pnew, int i);  //????i?????
void Delete_LinkList(NODE *head, int i); //??i???
NODE* Search_LinkList(NODE *head, int score); //?score??
int  Update_LinkList(NODE *head, int oldscore, int newscore); //??score

int main(void)
{
    NODE *head,*pnew;
    int i;
    head = Create_LinkList();
    if(head==NULL)
        return -1;
    Display_LinkList(head);
    pnew = (NODE *)malloc(sizeof(NODE));
    if( NULL == pnew)
    {
        printf("Insert pnew malloc fail\n");
        return -1;
    }
    printf("please input insert score:");
    scanf("%d",&pnew->score);
    printf("please input insert insert place i(>0):");
    scanf("%d",&i);
    pnew->next = NULL;
    Insert_LinkList(head, pnew, i);
    printf("after Inserting:\n");
    Display_LinkList(head);
    Delete_LinkList(head,1);
    printf("after Deleting:\n");
    Display_LinkList(head);
    Update_LinkList(head,30,300);
    printf("after Updating:\n");
    Display_LinkList(head);
    Free_LinkList(head);
    return 0;
}
NODE *Create_LinkList(void) //????
{
    NODE *head, *tail, *pnew;
    int score;

    head = (NODE *)malloc(sizeof(NODE));
    if( NULL == head )
    {
        printf("malloc fail\n");
        return NULL;
    }
    head->next = NULL;
    tail = head;
    printf("please input scores of students:");
    while(1)
    {
        scanf("%d",&score);
        if( score < 0 )
        {
            break;
        }
        pnew = (NODE *)malloc(sizeof(NODE));
        pnew->score = score;
        pnew->next = NULL;
        tail->next = pnew;
        tail = pnew;
    }
    return head;
}


void Display_LinkList(NODE *head)
{
    NODE *pnode;
    for(pnode = head->next; pnode!=NULL; pnode=pnode->next)
    {
        printf("score=%d\n",pnode->score);
    }
    return;
}

void Insert_LinkList(NODE *head, NODE *pnew, int i)
{
  NODE *p;
  int j;
  p = head;
  for (j = 0; j < i && p != NULL; j++)  //?p???????i???
      p = p->next;
  if (p == NULL)  //??????i??????
  {
    printf ("the %d node not foundt!\n", i);
    return;
  }
  pnew->next = p->next ;  //????????????i????????
  p->next = pnew;        //??i?????????????
}
void Delete_LinkList(NODE *head, int i)
{
    NODE *p,*q;
    int j;
    p = head;
    for(j=1;j<i && p->next!=NULL;j++)
    {
            p=p->next;
    }
    if( NULL == p->next )
    {
        printf("There is no %d node\n",i);
        return;
    }
    q = p->next;
    p->next = q->next;
    free(q);
}
#if 0
void Free_LinkList(NODE *head)
{
    NODE *p,*q;
    if( NULL == head )
        return;
    p = head;
    while(p!=NULL)
    {
        q=p->next;
        printf("Free : score=%d\n",p->score);
        free(p);
        p = q;
    }
}
#else
void Free_LinkList(NODE *head)
{
    NODE *p,*q;
    if( NULL == head )
        return;
    p = head;
    while(p->next!=NULL)
    {
        q=p->next;
        p->next = q->next;
        free(q);
    }
    free(head);
}

#endif
NODE* Search_LinkList(NODE *head, int score)
{
    NODE *p;
    while(p!=NULL)
    {
        if(p->score==score)
        break;
        else
        p=p->next;
    }
    return p;
}
int  Update_LinkList(NODE *head, int oldscore, int newscore)
{
    NODE *p=NULL;
    p=Search_LinkList(head,oldscore);
    if(NULL == p)
    {
        printf("Sorry, NO found\n");
        return 0;
    }
    p->score=newscore;
    printf("Update Successfuly");
    return 1;
}