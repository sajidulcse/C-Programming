#include<stdio.h>
int main()
{
    int i,j,n,a[60];
    printf("How many numbers:  ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;;
    for(i=0;i<n;i++)
    {
        sum= sum+a[i];
    }
     printf("sum=%d", sum);
     printf("\n");
}
