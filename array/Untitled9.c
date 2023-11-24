#include<stdio.h>
int main()
{
    int num[100],n,i,index ;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Enter Numbers: ");


    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int min = num[0];
    index=0;
    for(i=1;i<n;i++)
    {
        if(min > num[i])
            min = num[i];
            index=i;
    }
    printf("Minimum number %d and index %d\n",min,index);
    return 0;
}

