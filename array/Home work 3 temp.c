/*Find out the maximum temp among all city*/
#include<stdio.h>
int main()
{
    int i,j,temp[48];


    printf("Enter the value of 12 months temp of 4 city:\n");

    for(i=0;i<48;i++)
    {
        scanf("%d",&temp[i]);
    }
    int max=temp[0];
    for(i=1;i<48;i++)
    {
        if(max<temp[i])
            max=temp[i];
    }

    printf("The Maximum temperature of among all city is= %d",max);

        return 0;

}
