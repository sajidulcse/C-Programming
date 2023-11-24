#include<stdio.h>
int main()
{
    int x=12,y=66,temp;

    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("x=%d\n",x);
    printf("y=%d",y);

    return 0;
}
