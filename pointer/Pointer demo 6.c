#include<stdio.h>
int main()
{
    int a[10]={12,13,14,15,16,17,18,19,20,21};
    int *ptr,i;

    ptr=&a[0];

    for(i=0;i<10;i++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }

    return 0;
}
