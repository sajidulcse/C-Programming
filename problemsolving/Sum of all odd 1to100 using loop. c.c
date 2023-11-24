#include<stdio.h>

int main()
{
    int i,sum=0;

    for (i=0; i<=100; i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;

        }
    }

    printf("Sum of (1to100) odd integers is %d\n",sum);

    return 0;
}

