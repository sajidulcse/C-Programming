#include<stdio.h>

int main()
{
    int n ,i,sum=0;
    float average;

    printf("Enter any number of term for average: ");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    average=sum/n;
    printf("The average of %d term number : %.2f",n,average);


    return 0;

}

