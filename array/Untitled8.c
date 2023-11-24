#include<stdio.h>
int main()
{
    int num[100],n,i;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Enter Numbers: ");


    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int max = num[0];
    int index=0
    for(i=1;i<n;i++)
    {
        if(max < num[i])
            max = num[i];
            index=max
    }
    printf("Maximum number = %d\n",max);
    return 0;
}
