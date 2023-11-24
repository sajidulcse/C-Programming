#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n= ");
    scanf("%d",&n);

    printf("Enter Numbers: ");

    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("Element of a[%d]\n",a[i]);
    }
    return 0;
}
