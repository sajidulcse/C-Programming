#include<stdio.h>

int main()
{
    int x,i;

    printf("Enter any Integer number for it's Multiplication table: ");
    scanf("%d",&x);
    printf("The Multiplication table for %d is: \n",x);

    for(i=1;i<11;i++)
    {
        printf("%d*%d= %d\n",x,i,x*i);
    }

    return 0;
}
