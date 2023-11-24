#include<stdio.h>
int main()
{
    int a[20],b[20],n,i,sum=0;

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        b[i]=sum;
    }
    printf("The Cumulative sum: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
