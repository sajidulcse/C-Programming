

#include<stdio.h>
int main()
{
    int i=2,sum=0;
    while(i<=100)
    {
        sum=sum+i;
        i=i+2;
    }
    printf("The sum of even integers from 1 to 100 is= %d\n",sum);

    return 0;
}

