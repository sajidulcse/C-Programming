#include<stdio.h>
int main()
{
    int a[100],i,n;

    printf("Enter the value of n= ");
    scanf("%d",&n);

    printf("Enter the numbers of array: \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int search,flag=1;

    printf("Enter number to search\t: ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(search==a[i])
        {
            printf("%d Found %d number index\n",search,i);
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("Not found");
    }
    return 0;
}
