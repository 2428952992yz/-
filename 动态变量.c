#include<stdio.h>
#include<malloc.h>
#include<string.h>
int main(void)
{
    int i,n=0;
    char*color[20];
    char str[15];
    scanf("%s",str);
    while(str[0]!='#')//strcmp(str,"#")
    {
     color[n]=(char*)malloc(sizeof(char)*(strlen(str)+1));
       strcpy(color[n],str);
       n++;
        scanf("%s",str);
    }
    for(i=n-1;i>=0;i--)
    {
     printf("%s ",color[i]);
    }
    return 0;
}