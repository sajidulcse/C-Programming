#include<stdio.h>
int main()
{
    int a[5]={111,22,33,44,55};

    int *ptr,i;

    ptr=&a[0];

    for(i=0;i<5;i++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }
}
