#include<stdio.h>

int main()
{
    int i,sum=0;

    for(i=1;i<=100;i=i+2)
    {
        sum=sum+i;
    }
    printf("The sum of 1 to 100 number odd is : %d",sum);

    return 0;

}
