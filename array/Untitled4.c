#include<stdio.h>
int main()
{
    int a[100],sum=0,i,n;
    printf("Enter how many numbers: ");
    scanf("%d",&n);

    printf("Enter Numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum= sum+ a[i];
    }
    printf("Sum = %d \n",sum);
    printf("Average = %.2f",(float)sum/n);
    return 0;
}
