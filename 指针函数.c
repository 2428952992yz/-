#include<stdio.h>
#include<malloc.h>
#include<string.h>
char *match(char *s,char ch);
int main(void)
{
    char str[80],ch;
    char *q;
    printf("plese input a string:");
    scanf("%s",str);
    printf("plese input s char:");
    getchar();
    scanf("%s",&ch);
    q=match(str,ch);
    if(q!=NULL){
    printf("%s",q);
    }
    else
    {
    printf("NO FOUND\n");
    }
    return 0;
}
char *match(char *s,char ch)
{
    char *p;
    p=s;
    while(*p!='\0')
    {
        if(*p==ch)
        return p;
        p++;
    }
    return NULL;
}