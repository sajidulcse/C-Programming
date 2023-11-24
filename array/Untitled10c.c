#include<stdio.h>
int main()
{
    int a[100],n,i,search;
    printf("Enter the number of n: ");
    scanf("%d",&n);

    printf("Enter the elements of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number to search: ");
    scanf("%d",&search);
    int flag=1;

    for(i=0; i<n; i++)
    {
        if(search==a[i])
        {
            printf("%d is found %d number index",search,i);
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("Not Found");
    }

}
