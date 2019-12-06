#include <stdio.h>
#include <math.h>
int isPrime(int m)
{
    int i;
    if (m == 1)
        return 0;
    for (i = 2; i <= sqrt(m); i++)
        if (m % i == 0)
        {
            return 0;
        }
    return 1;
}
int main(void)
{
    int m, count;
    count = 0;
    for (m = 2; m < 500; m++)
    {
        if (isPrime(m) != 0)
        {
            printf(" %6d", m);
            count++;
            if (count % 10 == 0)
                printf("\n");
        }
    }
    return 0;
}
