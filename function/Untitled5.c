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
    for(i=n;i>0;i--)
    {
         printf("%d", a[i]);
    }

     printf("\n");
}

