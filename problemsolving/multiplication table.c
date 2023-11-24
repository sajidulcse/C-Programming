#include<stdio.h>

int main()
{
    int x;
    printf("Enter Any integer Number for it's Multiplication Table:");
    scanf("%d",&x);
    int i;
    printf("Multiplication table for %d is:\n",x);
    for(i=1;i<11;i++)
    {
        printf("%d*%d=%d\n",x,i,x*i);
    }
    return 0;
}
