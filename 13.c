#include <stdio.h>
int main(void)
{
    int a[5];
    int i, j, temp, min;
    printf("Enter 5 numbers:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = 0; j < 5; j++)
        for (i = 0; i < 5-1; i++)
        {
            if (a[j] < a[i])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    for (i = 0; i < 5; i++)
    {
        printf("% d", a[i]);
    }
    return 0;
}