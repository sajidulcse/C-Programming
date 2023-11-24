#include<stdio.h>

int main()
{
    int sum=0,i=1002;
    while(i<2000)
    {
        sum=sum+i;
        i+=3;

    }
     printf("The sum is= %d\n",sum);

    return 0;
}

